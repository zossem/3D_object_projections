#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
    WxSB_TranslationX->SetRange(0, 200); WxSB_TranslationX->SetValue(100);
    WxSB_TranslationY->SetRange(0, 200); WxSB_TranslationY->SetValue(100);
    WxSB_TranslationZ->SetRange(0, 200); WxSB_TranslationZ->SetValue(100);

    WxSB_RotateX->SetRange(0, 360); WxSB_RotateX->SetValue(0);
    WxSB_RotateY->SetRange(0, 360); WxSB_RotateY->SetValue(0);
    WxSB_RotateZ->SetRange(0, 360); WxSB_RotateZ->SetValue(0);

    WxSB_ScaleX->SetRange(1, 200); WxSB_ScaleX->SetValue(100);
    WxSB_ScaleY->SetRange(1, 200); WxSB_ScaleY->SetValue(100);
    WxSB_ScaleZ->SetRange(1, 200); WxSB_ScaleZ->SetValue(100);

    ReadProjectionData1();
    ReadProjectionData2();
    ReadProjectionData3();
}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
RefreshPoints();
}

void GUIMyFrame1::Choice_Projection_1( wxCommandEvent& event )
{
// TODO: Implement Choice_Projection_1
}

void GUIMyFrame1::Text_Update_1( wxCommandEvent& event )
{
ReadProjectionData1();
}

void GUIMyFrame1::Choice_Projection_2( wxCommandEvent& event )
{
// TODO: Implement Choice_Projection_2
}

void GUIMyFrame1::Text_Update_2( wxCommandEvent& event )
{
ReadProjectionData2();
}

void GUIMyFrame1::Choice_Projection_3( wxCommandEvent& event )
{
// TODO: Implement Choice_Projection_3
}

void GUIMyFrame1::Text_Update_3( wxCommandEvent& event )
{
ReadProjectionData3();
}


void GUIMyFrame1::m_button_load_geometry_click( wxCommandEvent& event )
{
wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("Geometry file (*.geo)|*.geo"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);

if (WxOpenFileDialog.ShowModal() == wxID_OK)
{
double x1, y1, z1, x2, y2, z2;
int r, g, b;

std::ifstream in(WxOpenFileDialog.GetPath().ToAscii());
if (in.is_open())
{
data.clear();
while (!in.eof())
{
in >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> r >> g >> b;
data.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
}
in.close();
}
}
}

void GUIMyFrame1::Scrolls_Updated( wxScrollEvent& event )
{
WxST_TranslationX->SetLabel(wxString::Format(wxT("%g"), (WxSB_TranslationX->GetValue() - 100) / 50.0));
WxST_TranslationY->SetLabel(wxString::Format(wxT("%g"), (WxSB_TranslationY->GetValue() - 100) / 50.0));
WxST_TranslationZ->SetLabel(wxString::Format(wxT("%g"), (WxSB_TranslationZ->GetValue() - 100) / 50.0));

WxST_RotateX->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateX->GetValue()));
WxST_RotateY->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateY->GetValue()));
WxST_RotateZ->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateZ->GetValue()));

WxST_ScaleX->SetLabel(wxString::Format(wxT("%g"), WxSB_ScaleX->GetValue() / 100.0));
WxST_ScaleY->SetLabel(wxString::Format(wxT("%g"), WxSB_ScaleY->GetValue() / 100.0));
WxST_ScaleZ->SetLabel(wxString::Format(wxT("%g"), WxSB_ScaleZ->GetValue() / 100.0));


RefreshPoints();
}

void GUIMyFrame1::Repaint(wxPanel* m_panel, int selection, std::vector<Segment> data_transformed)
{
    wxClientDC dc1(m_panel);
    wxBufferedDC dc(&dc1);

    dc.SetBackground(wxBrush(RGB(255, 255, 255)));
    dc.Clear();

    Matrix4 projection_matrix, scale_matrix_to_window;
    Vector4 v_begin, v_end;
    wxColor color_line;

    switch (selection){
    case 0: //perspective projection
        projection_matrix = PerspectiveProjection(projection_1);
        scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 2.0, m_panel_1->GetSize().y / 2.0, 1.0);
        break;

    case 1:
    case 2://axonometric projection (isometric / whichever)
        projection_matrix = AxonometricProjection(projection_1);
        scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 4.0, m_panel_1->GetSize().y / 4.0, 1.0);
        break;

    case 3: //cabinet projection
        break;

    case 4: //cavalier projection
        break;

    case 5: //whichever projection
        break;

    case 6:
    case 7:
    case 8: //orthogonal projection front / up / down
        projection_matrix = OrthogonalProjection(projection_1);
        scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 2.0, m_panel_1->GetSize().y / 2.0, 1.0);
        break;
    }

    for (int i = 0; i < data_transformed.size(); i++)
    {
        v_begin.Set(data_transformed[i].begin.x, data_transformed[i].begin.y, data_transformed[i].begin.z);
        v_end.Set(data_transformed[i].end.x, data_transformed[i].end.y, data_transformed[i].end.z);

        color_line = wxColor(data_transformed[i].color.R, data_transformed[i].color.G, data_transformed[i].color.B);
        dc.SetPen(color_line);

        //NIE MA OBCINANIA!! trza by je dodac

        v_begin = scale_matrix_to_window * projection_matrix * v_begin;
        v_end = scale_matrix_to_window * projection_matrix * v_end;

        v_begin.Set(v_begin.GetX() / v_begin.data[3], v_begin.GetY() / v_begin.data[3], v_begin.GetZ() / v_begin.data[3]);
        v_end.Set(v_end.GetX() / v_end.data[3], v_end.GetY() / v_end.data[3], v_end.GetZ() / v_end.data[3]);

        dc.DrawLine(v_begin.GetX() + m_panel_1->GetSize().x / 2.0, v_begin.GetY() + m_panel_1->GetSize().y / 2.0,
            v_end.GetX() + m_panel_1->GetSize().x / 2.0, v_end.GetY() + m_panel_1->GetSize().y / 2.0);

    }
}

void GUIMyFrame1::SetMatrix(Matrix4& matrix, Vector4& v_1, Vector4& v_2, Vector4& v_3, Vector4& v_4)//v_1 to v_4 are vertical vectors, this enable to easily set the matrix
{
    matrix.data[0][0] = v_1.GetX();
    matrix.data[1][0] = v_1.GetY();
    matrix.data[2][0] = v_1.GetZ();
    matrix.data[0][1] = v_2.GetX();
    matrix.data[1][1] = v_2.GetY();
    matrix.data[2][1] = v_2.GetZ();
    matrix.data[0][2] = v_3.GetX();
    matrix.data[1][2] = v_3.GetY();
    matrix.data[2][2] = v_3.GetZ();
    matrix.data[0][3] = v_4.GetX();
    matrix.data[1][3] = v_4.GetY();
    matrix.data[2][3] = v_4.GetZ();
    matrix.data[3][3] = 1.0;
}


void GUIMyFrame1::RefreshPoints() {

    OldRefresh(m_choice_projection_1->GetSelection(), data_transformed_1);
    OldRefresh(m_choice_projection_2->GetSelection(), data_transformed_2);
    OldRefresh(m_choice_projection_3->GetSelection(), data_transformed_3);

    Repaint1();
    Repaint2();
    Repaint3();

    return;
}

void GUIMyFrame1::OldRefresh(int selection, std::vector<Segment> &data_transformed)
{
        //setting scala
        double Sx = (WxSB_ScaleX->GetValue() / 100.0);
        double Sy = (WxSB_ScaleY->GetValue() / 100.0);
        double Sz = (WxSB_ScaleZ->GetValue() / 100.0);

        //setting rotation
        double Rx = (360 - (double)WxSB_RotateX->GetValue()) / 180.0 * M_PI;
        double Ry = ((double)WxSB_RotateY->GetValue()) / 180.0 * M_PI;
        double Rz = (180 + (double)WxSB_RotateZ->GetValue()) / 180.0 * M_PI;

        //set translation
        double Tx = -1.0 * ((WxSB_TranslationX->GetValue() - 100.0) / 50.0);
        double Ty = ((WxSB_TranslationY->GetValue() - 100.0) / 50.0);
        double Tz = 1.0 + ((WxSB_TranslationZ->GetValue() - 100.0) / 50.0);

        switch (selection) {
        case 0:
            Tx *= -1.0;
            Ty *= -1.0;
            break;
    
        case 1:
        case 2:
            Rx -= 30.0 * M_PI / 180.0;
            Ry -= 45.0 * M_PI / 180.0;
            Rz += 22.0 * M_PI / 180.0;

            Tz += ((-2.0 - 100.0) / 50.0); //przesuniecie osi obrotu; hard shoved -2.0 ale przydaloby sie obliczyc na podstawie danych modelu,,
            break;

        case 6:
            Tz += ((-2.0 - 100.0) / 50.0); 
            break;

        case 7:
            Rx -= 90.0 / 180.0 * M_PI;
            Tz += ((-1.0 - 100.0) / 50.0);
            break;

        case 8:
            Rx += 90.0 / 180.0 * M_PI;
            Tz += ((-1.0 - 100.0) / 50.0);
            break;
        }

        Matrix4 scale_matrix = SetScaleMatrix(Sx, Sy, Sz);
        Matrix4 rotation_matrix = SetRotationMatrix(Rx, Ry, Rz);
        Matrix4 translation_matrix = SetTranslationMatrix(Tx, Ty, Tz);
        Matrix4 t;

        if (!selection) {
            t = translation_matrix * rotation_matrix * scale_matrix;
        }
        else {
            t = rotation_matrix * translation_matrix * scale_matrix;
        }

        Vector4 v_begin, v_end;
        data_transformed.clear();

        for (int i = 0; i < data.size(); i++)
        {
            v_begin.Set(data[i].begin.x, data[i].begin.y, data[i].begin.z);
            v_end.Set(data[i].end.x, data[i].end.y, data[i].end.z);

            v_begin = t * v_begin;
            v_end = t *  v_end;

            data_transformed.push_back(Segment( Point(v_begin.GetX(), v_begin.GetY(), v_begin.GetZ()),
                Point(v_end.GetX(), v_end.GetY(), v_end.GetZ()),
                Color(data[i].color.R, data[i].color.G, data[i].color.B)));
        }

}

void GUIMyFrame1::Repaint3()
{
    Repaint(m_panel_3, m_choice_projection_3->GetSelection(), data_transformed_3);
    return;
}

void GUIMyFrame1::Repaint2()
{
    Repaint(m_panel_2, m_choice_projection_2->GetSelection(), data_transformed_2);
    return;
}

void GUIMyFrame1::Repaint1()
{
    Repaint(m_panel_1, m_choice_projection_1->GetSelection(), data_transformed_1);
    return;
}


Matrix4  GUIMyFrame1::PerspectiveProjection(const ProjectionParameters& projection)
{
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4; //vectors to set matrix
    Matrix4 MVP_matrix;

    set_matrix_v_1.Set(2.0 * projection.GetNear() / (projection.GetRight() - projection.GetLeft()), 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 2.0 * projection.GetNear() / (projection.GetTop() - projection.GetBottom()), 0.0);
    set_matrix_v_3.Set((projection.GetRight() + projection.GetLeft()) / (projection.GetRight() - projection.GetLeft()),
        (projection.GetTop() + projection.GetBottom()) / (projection.GetTop() - projection.GetBottom()),
        (projection.GetFar() + projection.GetNear()) / (projection.GetNear() - projection.GetFar()));
    set_matrix_v_4.Set(0.0, 0.0, 2.0 * projection.GetNear() * projection.GetFar() / (projection.GetNear() - projection.GetFar()));
    SetMatrix(MVP_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);
    MVP_matrix.data[3][2] = -1.0;
    MVP_matrix.data[3][3] = 0.0;

    return MVP_matrix;
}

Matrix4  GUIMyFrame1::OrthogonalProjection(const ProjectionParameters& projection)
{
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4; //vectors to set matrix
    Matrix4 Orthogonal_matrix;

    set_matrix_v_1.Set(2.0 / (projection.GetRight() - projection.GetLeft()), 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 2.0 / (projection.GetTop() - projection.GetBottom()), 0.0);
    set_matrix_v_3.Set(0.0, 0.0, -2.0 / (projection.GetFar() - projection.GetNear()));
    set_matrix_v_4.Set(-1.0 * (projection.GetRight() + projection.GetLeft()) / (projection.GetRight() - projection.GetLeft()),
        -1.0 * (projection.GetTop() + projection.GetBottom()) / (projection.GetTop() - projection.GetBottom()),
        -1.0 * (projection.GetFar() + projection.GetNear()) / (projection.GetFar() - projection.GetNear()));

    SetMatrix(Orthogonal_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return Orthogonal_matrix;
}

Matrix4 GUIMyFrame1::AxonometricProjection(const ProjectionParameters& projection)
{
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4; //vectors to set matrix
    Matrix4 Axonometric_matrix;

    set_matrix_v_1.Set((projection.GetRight() - projection.GetLeft()) / 2.0, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, (projection.GetTop() - projection.GetBottom()) / 2.0, 0.0);
    set_matrix_v_3.Set(0.0, 0.0, (projection.GetFar() - projection.GetNear()) / -2.0);
    set_matrix_v_4.Set((projection.GetRight() + projection.GetLeft()) / 2.0,
        (projection.GetTop() + projection.GetBottom()) / 2.0,
        -2.0 * (projection.GetFar() + projection.GetNear()) / 2.0);

    SetMatrix(Axonometric_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return Axonometric_matrix;
}

Matrix4 GUIMyFrame1::LookAt(const ProjectionParameters& projection)
{
    Vector4 v_X, v_Y, v_Z, v_W; //vectors to set matrix
    Matrix4 Look_at_matrix;

    v_Z = projection.vec_VPN;
    v_Y = projection.vec_VUP;

    v_Z.Normalize();

    v_X = v_Y.VectorMultiplication(v_Z);
    v_Y = v_Z.VectorMultiplication(v_X);

    v_X.Normalize();
    v_Y.Normalize();
    v_W.Set(0.0, 0.0, 0.0);
    SetMatrix(Look_at_matrix, v_X, v_Y, v_Z, v_W);


    Look_at_matrix.data[3][0] = -1.0 * v_X.ScalarMultiplication(projection.vec_PRP);
    Look_at_matrix.data[3][1] = -1.0 * v_Y.ScalarMultiplication(projection.vec_PRP);
    Look_at_matrix.data[3][2] = -1.0 * v_Z.ScalarMultiplication(projection.vec_PRP);

    return Look_at_matrix;
}


Matrix4 GUIMyFrame1::SetTranslationMatrix(double Tx, double Ty, double Tz){

    Matrix4 t;
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;

    set_matrix_v_1.Set(1.0, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 1.0, 0.0);
    set_matrix_v_3.Set(0.0, 0.0, 1.0);
    set_matrix_v_4.Set(Tx, Ty, Tz);

    SetMatrix(t, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return t;
}

Matrix4 GUIMyFrame1::SetRotationMatrix(double Rx, double Ry, double Rz){

    Matrix4 t;
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;

    Matrix4 Rot_X_matrix;
    set_matrix_v_1.Set(1.0, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, cos(Rx), sin(Rx));
    set_matrix_v_3.Set(0.0, -sin(Rx), cos(Rx));
    set_matrix_v_4.Set(0.0, 0.0, 0.0);
    SetMatrix(Rot_X_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    Matrix4 Rot_Y_matrix;
    set_matrix_v_1.Set(cos(Ry), 0.0, -sin(Ry));
    set_matrix_v_2.Set(0.0, 1.0, 0.0);
    set_matrix_v_3.Set(sin(Ry), 0.0, cos(Ry));
    set_matrix_v_4.Set(0.0, 0.0, 0.0);
    SetMatrix(Rot_Y_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    Matrix4 Rot_Z_matrix;
    set_matrix_v_1.Set(cos(Rz), sin(Rz), 0.0);
    set_matrix_v_2.Set(-sin(Rz), cos(Rz), 0.0);
    set_matrix_v_3.Set(0.0, 0.0, 1.0);
    set_matrix_v_4.Set(0.0, 0.0, 0.0);
    SetMatrix(Rot_Z_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    t = Rot_Z_matrix * Rot_Y_matrix * Rot_X_matrix;

    return t;
}

Matrix4 GUIMyFrame1::SetScaleMatrix(double Sx, double Sy, double Sz){

    Matrix4 t;
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;

    set_matrix_v_1.Set(Sx, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, Sy, 0.0);
    set_matrix_v_3.Set(0.0, 0.0, Sz);
    set_matrix_v_4.Set(0.0, 0.0, 0.0);

    SetMatrix(t, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return t;
}


void GUIMyFrame1::ReadProjectionData1()
{
    double coor_x, coor_y, coor_z;
    m_textCtrl_VRP_x_1->GetValue().ToDouble(&coor_x);
    m_textCtrl_VRP_y_1->GetValue().ToDouble(&coor_y);
    m_textCtrl_VRP_z_1->GetValue().ToDouble(&coor_z);
    projection_1.vec_VRP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VPN_x_1->GetValue().ToDouble(&coor_x);
    m_textCtrl_VPN_y_1->GetValue().ToDouble(&coor_y);
    m_textCtrl_VPN_z_1->GetValue().ToDouble(&coor_z);
    projection_1.vec_VPN.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VUP_x_1->GetValue().ToDouble(&coor_x);
    m_textCtrl_VUP_y_1->GetValue().ToDouble(&coor_y);
    m_textCtrl_VUP_z_1->GetValue().ToDouble(&coor_z);
    projection_1.vec_VUP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_PRP_x_1->GetValue().ToDouble(&coor_x);
    m_textCtrl_PRP_y_1->GetValue().ToDouble(&coor_y);
    m_textCtrl_PRP_z_1->GetValue().ToDouble(&coor_z);
    projection_1.vec_PRP.Set(coor_x, coor_y, coor_z);


    m_textCtrl_window_u_start_1->GetValue().ToDouble(&projection_1.window_size.x_begin);
    m_textCtrl_window_u_stop_1->GetValue().ToDouble(&projection_1.window_size.x_end);
    m_textCtrl_window_v_start_1->GetValue().ToDouble(&projection_1.window_size.y_begin);
    m_textCtrl_window_v_stop_1->GetValue().ToDouble(&projection_1.window_size.y_end);


    m_textCtrl_Front_1->GetValue().ToDouble(&projection_1.front);
    m_textCtrl_Back_1->GetValue().ToDouble(&projection_1.back);
}

void GUIMyFrame1::ReadProjectionData2()
{
    double coor_x, coor_y, coor_z;
    m_textCtrl_VRP_x_2->GetValue().ToDouble(&coor_x);
    m_textCtrl_VRP_y_2->GetValue().ToDouble(&coor_y);
    m_textCtrl_VRP_z_2->GetValue().ToDouble(&coor_z);
    projection_2.vec_VRP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VPN_x_2->GetValue().ToDouble(&coor_x);
    m_textCtrl_VPN_y_2->GetValue().ToDouble(&coor_y);
    m_textCtrl_VPN_z_2->GetValue().ToDouble(&coor_z);
    projection_2.vec_VPN.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VUP_x_2->GetValue().ToDouble(&coor_x);
    m_textCtrl_VUP_y_2->GetValue().ToDouble(&coor_y);
    m_textCtrl_VUP_z_2->GetValue().ToDouble(&coor_z);
    projection_2.vec_VUP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_PRP_x_2->GetValue().ToDouble(&coor_x);
    m_textCtrl_PRP_y_2->GetValue().ToDouble(&coor_y);
    m_textCtrl_PRP_z_2->GetValue().ToDouble(&coor_z);
    projection_2.vec_PRP.Set(coor_x, coor_y, coor_z);


    m_textCtrl_window_u_start_2->GetValue().ToDouble(&projection_2.window_size.x_begin);
    m_textCtrl_window_u_stop_2->GetValue().ToDouble(&projection_2.window_size.x_end);
    m_textCtrl_window_v_start_2->GetValue().ToDouble(&projection_2.window_size.y_begin);
    m_textCtrl_window_v_stop_2->GetValue().ToDouble(&projection_2.window_size.y_end);


    m_textCtrl_Front_2->GetValue().ToDouble(&projection_2.front);
    m_textCtrl_Back_2->GetValue().ToDouble(&projection_2.back);
}

void GUIMyFrame1::ReadProjectionData3()
{
    double coor_x, coor_y, coor_z;
    m_textCtrl_VRP_x_3->GetValue().ToDouble(&coor_x);
    m_textCtrl_VRP_y_3->GetValue().ToDouble(&coor_y);
    m_textCtrl_VRP_z_3->GetValue().ToDouble(&coor_z);
    projection_3.vec_VRP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VPN_x_3->GetValue().ToDouble(&coor_x);
    m_textCtrl_VPN_y_3->GetValue().ToDouble(&coor_y);
    m_textCtrl_VPN_z_3->GetValue().ToDouble(&coor_z);
    projection_3.vec_VPN.Set(coor_x, coor_y, coor_z);

    m_textCtrl_VUP_x_3->GetValue().ToDouble(&coor_x);
    m_textCtrl_VUP_y_3->GetValue().ToDouble(&coor_y);
    m_textCtrl_VUP_z_3->GetValue().ToDouble(&coor_z);
    projection_3.vec_VUP.Set(coor_x, coor_y, coor_z);

    m_textCtrl_PRP_x_3->GetValue().ToDouble(&coor_x);
    m_textCtrl_PRP_y_3->GetValue().ToDouble(&coor_y);
    m_textCtrl_PRP_z_3->GetValue().ToDouble(&coor_z);
    projection_3.vec_PRP.Set(coor_x, coor_y, coor_z);


    m_textCtrl_window_u_start_3->GetValue().ToDouble(&projection_3.window_size.x_begin);
    m_textCtrl_window_u_stop_3->GetValue().ToDouble(&projection_3.window_size.x_end);
    m_textCtrl_window_v_start_3->GetValue().ToDouble(&projection_3.window_size.y_begin);
    m_textCtrl_window_v_stop_3->GetValue().ToDouble(&projection_3.window_size.y_end);


    m_textCtrl_Front_3->GetValue().ToDouble(&projection_3.front);
    m_textCtrl_Back_3->GetValue().ToDouble(&projection_3.back);
}