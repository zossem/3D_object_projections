#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
    wxImage image;
    wxImage croppedImage;

    if (image.LoadFile("jamnik.png", wxBITMAP_TYPE_PNG)) {

        double dx = image.GetWidth() / 3.0;
        double dy = image.GetHeight();

        croppedImage = image.GetSubImage(wxRect(0, 0, dx, dy));
        doggo_1 = croppedImage;
        croppedImage = image.GetSubImage(wxRect(dx, 0, dx, dy));
        doggo_2 = croppedImage;
        croppedImage = image.GetSubImage(wxRect(2*dx, 0, dx, dy));
        doggo_3 = croppedImage;
        
    }
    else {
        wxMessageBox("Nie udało się wczytać obrazu!");
    }

    m_choice_projection_1->Disable();
    m_choice_projection_2->Disable();
    m_choice_projection_3->Disable();

    WxSB_TranslationX->SetRange(0, 200); WxSB_TranslationX->SetValue(100);
    WxSB_TranslationY->SetRange(0, 200); WxSB_TranslationY->SetValue(100);
    WxSB_TranslationZ->SetRange(0, 200); WxSB_TranslationZ->SetValue(100);

    WxSB_RotateX->SetRange(0, 360); WxSB_RotateX->SetValue(0);
    WxSB_RotateY->SetRange(0, 360); WxSB_RotateY->SetValue(0);
    WxSB_RotateZ->SetRange(0, 360); WxSB_RotateZ->SetValue(0);

    WxSB_ScaleX->SetRange(1, 200); WxSB_ScaleX->SetValue(100);
    WxSB_ScaleY->SetRange(1, 200); WxSB_ScaleY->SetValue(100);
    WxSB_ScaleZ->SetRange(1, 200); WxSB_ScaleZ->SetValue(100);

    /////////////////////////////////////// - 1
    //indeks [0-2] - VRP
    zmienne_1.push_back(m_textCtrl_VRP_x_1);
    zmienne_1.push_back(m_textCtrl_VRP_y_1);
    zmienne_1.push_back(m_textCtrl_VRP_z_1);
    //indeks [3-5] - VPN
    zmienne_1.push_back(m_textCtrl_VPN_x_1);
    zmienne_1.push_back(m_textCtrl_VPN_y_1);
    zmienne_1.push_back(m_textCtrl_VPN_z_1);
    //indeks [6-8] - VUP
    zmienne_1.push_back(m_textCtrl_VUP_x_1);
    zmienne_1.push_back(m_textCtrl_VUP_y_1);
    zmienne_1.push_back(m_textCtrl_VUP_z_1);
    //indeks [9-11] - PRP
    zmienne_1.push_back(m_textCtrl_PRP_x_1);
    zmienne_1.push_back(m_textCtrl_PRP_y_1);
    zmienne_1.push_back(m_textCtrl_PRP_z_1);

    //indeks [12-15] - window
    zmienne_1.push_back(m_textCtrl_window_u_start_1);
    zmienne_1.push_back(m_textCtrl_window_u_stop_1);
    zmienne_1.push_back(m_textCtrl_window_v_start_1);
    zmienne_1.push_back(m_textCtrl_window_v_stop_1);

    //indeks [16-17] - front/back
    zmienne_1.push_back(m_textCtrl_Front_1);
    zmienne_1.push_back(m_textCtrl_Back_1);

    /////////////////////////////////////// - 2
    //indeks [0-2] - VRP
    zmienne_2.push_back(m_textCtrl_VRP_x_2);
    zmienne_2.push_back(m_textCtrl_VRP_y_2);
    zmienne_2.push_back(m_textCtrl_VRP_z_2);
    //indeks [3-5] - VPN
    zmienne_2.push_back(m_textCtrl_VPN_x_2);
    zmienne_2.push_back(m_textCtrl_VPN_y_2);
    zmienne_2.push_back(m_textCtrl_VPN_z_2);
    //indeks [6-8] - VUP
    zmienne_2.push_back(m_textCtrl_VUP_x_2);
    zmienne_2.push_back(m_textCtrl_VUP_y_2);
    zmienne_2.push_back(m_textCtrl_VUP_z_2);
    //indeks [9-11] - PRP
    zmienne_2.push_back(m_textCtrl_PRP_x_2);
    zmienne_2.push_back(m_textCtrl_PRP_y_2);
    zmienne_2.push_back(m_textCtrl_PRP_z_2);

    //indeks [12-15] - window
    zmienne_2.push_back(m_textCtrl_window_u_start_2);
    zmienne_2.push_back(m_textCtrl_window_u_stop_2);
    zmienne_2.push_back(m_textCtrl_window_v_start_2);
    zmienne_2.push_back(m_textCtrl_window_v_stop_2);

    //indeks [16-17] - front/back
    zmienne_2.push_back(m_textCtrl_Front_2);
    zmienne_2.push_back(m_textCtrl_Back_2);

    /////////////////////////////////////// - 3
    //indeks [0-2] - VRP
    zmienne_3.push_back(m_textCtrl_VRP_x_3);
    zmienne_3.push_back(m_textCtrl_VRP_y_3);
    zmienne_3.push_back(m_textCtrl_VRP_z_3);
    //indeks [3-5] - VPN
    zmienne_3.push_back(m_textCtrl_VPN_x_3);
    zmienne_3.push_back(m_textCtrl_VPN_y_3);
    zmienne_3.push_back(m_textCtrl_VPN_z_3);
    //indeks [6-8] - VUP
    zmienne_3.push_back(m_textCtrl_VUP_x_3);
    zmienne_3.push_back(m_textCtrl_VUP_y_3);
    zmienne_3.push_back(m_textCtrl_VUP_z_3);
    //indeks [9-11] - PRP
    zmienne_3.push_back(m_textCtrl_PRP_x_3);
    zmienne_3.push_back(m_textCtrl_PRP_y_3);
    zmienne_3.push_back(m_textCtrl_PRP_z_3);

    //indeks [12-15] - window
    zmienne_3.push_back(m_textCtrl_window_u_start_3);
    zmienne_3.push_back(m_textCtrl_window_u_stop_3);
    zmienne_3.push_back(m_textCtrl_window_v_start_3);
    zmienne_3.push_back(m_textCtrl_window_v_stop_3);

    //indeks [16-17] - front/back
    zmienne_3.push_back(m_textCtrl_Front_3);
    zmienne_3.push_back(m_textCtrl_Back_3);


    Choice_Projection(zmienne_1, projection_1, m_choice_projection_1->GetSelection());
    Choice_Projection(zmienne_2, projection_2, m_choice_projection_2->GetSelection());
    Choice_Projection(zmienne_3, projection_3, m_choice_projection_3->GetSelection());

}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
    RefreshPoints();
}


void GUIMyFrame1::Choice_Projection(std::vector <wxTextCtrl*> zmienne, ProjectionParameters& projection, int selection) {
    EnableProjectionData(zmienne);
    projection_type selected_typ = static_cast<projection_type> (selection);
    switch (selected_typ)
    {
    case perspective:
        SetPerspectiveProjectionData(zmienne);
        break;
    case axonometric_izo:
        SetAxonometricProjectionData(zmienne);
        break;
    case oblique_cabinet:
        SetCabinetProjectionData(zmienne);
        break;
    case oblique_cavalier:
        SetCavalierProjectionData(zmienne);
        break;
    case ortogonal_front:
        SetOrtogonalProjectionFrontData(zmienne);
        break;
    case ortogonal_up:
        SetOrtogonalProjectionUpData(zmienne);
        break;
    case ortogonal_down:
        SetOrtogonalProjectionDownData(zmienne);
        break;
    }
    ReadProjectionData(selection, zmienne, projection);
}


void GUIMyFrame1::Choice_Projection_1( wxCommandEvent& event )
{
    Choice_Projection(zmienne_1, projection_1, m_choice_projection_1->GetSelection());
}

void GUIMyFrame1::Text_Update_1( wxCommandEvent& event )
{
    ReadProjectionData(m_choice_projection_1->GetSelection(), zmienne_1, projection_1);
}

void GUIMyFrame1::Choice_Projection_2( wxCommandEvent& event )
{
    Choice_Projection(zmienne_2, projection_2, m_choice_projection_2->GetSelection());
}

void GUIMyFrame1::Text_Update_2( wxCommandEvent& event )
{
    ReadProjectionData(m_choice_projection_2->GetSelection(), zmienne_2, projection_2);
}

void GUIMyFrame1::Choice_Projection_3( wxCommandEvent& event )
{
    Choice_Projection(zmienne_3, projection_3, m_choice_projection_3->GetSelection());
}

void GUIMyFrame1::Text_Update_3( wxCommandEvent& event )
{
    ReadProjectionData(m_choice_projection_3->GetSelection(), zmienne_3, projection_3);
}


void GUIMyFrame1::m_button_load_geometry_click( wxCommandEvent& event )
{
    if (!start) { 
        m_choice_projection_1->Enable();
        m_choice_projection_2->Enable();
        m_choice_projection_3->Enable();
        start = 1.0;
    }

    wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("Geometry file (*.geo)|*.geo"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);

    if (WxOpenFileDialog.ShowModal() == wxID_OK)
    {
        double x1, y1, z1, x2, y2, z2;
        int r, g, b;

        std::ifstream in(WxOpenFileDialog.GetPath().ToAscii());
        if (in.is_open())
        {
            data.clear();
            in >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> r >> g >> b;
            data.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
            closest = z1;
            while (!in.eof())
            {
                in >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> r >> g >> b;
                data.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
                if (z1 < closest) closest = z1;
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

Matrix4  GUIMyFrame1::CavalierProjection(const ProjectionParameters& projection)
{
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;
    Matrix4 Oblique_matrix;

    double alpha = -30.0;
    double phi = m_panel_1->GetSize().y / 8.0;

    set_matrix_v_1.Set(2.0 / (projection.GetRight() - projection.GetLeft()), 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 2.0 / (projection.GetTop() - projection.GetBottom()), 0.0);
    set_matrix_v_3.Set(phi * cos(alpha * M_PI / 180.0), phi * sin(alpha * M_PI / 180.0), -2.0 / (projection.GetFar() - projection.GetNear()));
    set_matrix_v_4.Set(-1.0 * (projection.GetRight() + projection.GetLeft()) / (projection.GetRight() - projection.GetLeft()),
        -1.0 * (projection.GetTop() + projection.GetBottom()) / (projection.GetTop() - projection.GetBottom()),
        -1.0 * (projection.GetFar() + projection.GetNear()) / (projection.GetFar() - projection.GetNear()));

    SetMatrix(Oblique_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return Oblique_matrix;
}

Matrix4  GUIMyFrame1::CabinetProjection(const ProjectionParameters& projection)
{
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;
    Matrix4 Oblique_matrix;

    double alpha = -45.0;
    double phi = m_panel_1->GetSize().y / 8.0;

    set_matrix_v_1.Set(2.0 / (projection.GetRight() - projection.GetLeft()), 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 2.0 / (projection.GetTop() - projection.GetBottom()), 0.0);
    set_matrix_v_3.Set(phi * cos(alpha * M_PI / 180.0), phi * sin(alpha * M_PI / 180.0), -2.0 / (projection.GetFar() - projection.GetNear()));
    set_matrix_v_4.Set(-1.0 * (projection.GetRight() + projection.GetLeft()) / (projection.GetRight() - projection.GetLeft()),
        -1.0 * (projection.GetTop() + projection.GetBottom()) / (projection.GetTop() - projection.GetBottom()),
        -1.0 * (projection.GetFar() + projection.GetNear()) / (projection.GetFar() - projection.GetNear()));

    SetMatrix(Oblique_matrix, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return Oblique_matrix;
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


void GUIMyFrame1::Repaint(wxPanel* m_panel, int selection, std::vector<Segment> data_transformed, const ProjectionParameters& projection)
{
    wxClientDC dc1(m_panel);
    wxBufferedDC dc(&dc1);

    dc.SetBackground(wxBrush(RGB(255, 255, 255)));
    dc.Clear();

    if (start) {
        Matrix4 projection_matrix, scale_matrix_to_window;

        Vector4 v_begin, v_end;
        wxColor color_line;
        projection_type selected_typ = static_cast<projection_type> (selection);
        switch (selected_typ) {
        case perspective: //perspective projection
            projection_matrix = PerspectiveProjection(projection);
            scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 2.0, m_panel_1->GetSize().y / 2.0, 1.0);
            break;

        case axonometric_izo://axonometric projection (isometric)
            projection_matrix = AxonometricProjection(projection);
            scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 4.0, m_panel_1->GetSize().y / 4.0, 1.0);
            break;

        case oblique_cabinet: //cabinet projection
            projection_matrix = CabinetProjection(projection);
            scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 4.0, m_panel_1->GetSize().y / 4.0, 1.0);
            break;

        case oblique_cavalier: //cavalier projection
            projection_matrix = CavalierProjection(projection);
            scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 4.0, m_panel_1->GetSize().y / 4.0, 1.0);
            break;

        case ortogonal_front:
        case ortogonal_up:
        case ortogonal_down: //orthogonal projection front / up / down
            projection_matrix = OrthogonalProjection(projection);
            scale_matrix_to_window = SetScaleMatrix(m_panel_1->GetSize().x / 2.0, m_panel_1->GetSize().y / 2.0, 1.0);
            break;
        }

        for (int i = 0; i < data_transformed.size(); i++)
        {
            v_begin.Set(data_transformed[i].begin.x, data_transformed[i].begin.y, data_transformed[i].begin.z);
            v_end.Set(data_transformed[i].end.x, data_transformed[i].end.y, data_transformed[i].end.z);

            color_line = wxColor(data_transformed[i].color.R, data_transformed[i].color.G, data_transformed[i].color.B);
            dc.SetPen(color_line);


            v_begin = scale_matrix_to_window * v_begin;
            v_end = scale_matrix_to_window * v_end;



            if (selection == 0)//perspective projection
            {
                double barier = 0.0;

                if (v_begin.GetZ() <= barier && v_end.GetZ() <= barier)
                {
                    continue;
                }
                else
                {
                    if ((v_begin.GetZ() > barier && v_end.GetZ() <= barier) || (v_end.GetZ() > barier && v_begin.GetZ() <= barier))
                    {
                        Vector4 v_in, v_out;
                        if (v_end.GetZ() <= barier)
                        {
                            v_in = v_begin;
                            v_out = v_end;
                        }
                        else
                        {
                            v_in = v_end;
                            v_out = v_begin;
                        }
                        double length = fabs((barier - v_out.GetZ() / (v_in.GetZ() - v_out.GetZ())));
                        v_out.Set(v_in.GetX() - v_out.GetX() * length + v_out.GetX(), v_in.GetY() - v_out.GetY() * length + v_out.GetY(), barier);

                        v_begin = v_out;
                        v_end = v_in;
                    }


                    //v_begin = view_matrix * v_begin;
                    //v_end = view_matrix * v_end;

                    v_begin = projection_matrix * v_begin;
                    v_end = projection_matrix * v_end;

                }

            }
            else //all orthogonal projection
            {
                v_begin = projection_matrix * v_begin;
                v_end = projection_matrix * v_end;
            }

            v_begin.Set(v_begin.GetX() / v_begin.data[3], v_begin.GetY() / v_begin.data[3], v_begin.GetZ() / v_begin.data[3]);
            v_end.Set(v_end.GetX() / v_end.data[3], v_end.GetY() / v_end.data[3], v_end.GetZ() / v_end.data[3]);


            dc.DrawLine(v_begin.GetX() + m_panel_1->GetSize().x / 2.0, v_begin.GetY() + m_panel_1->GetSize().y / 2.0,
                v_end.GetX() + m_panel_1->GetSize().x / 2.0, v_end.GetY() + m_panel_1->GetSize().y / 2.0);
        }
    }
    else {
        projection_type selected_typ = static_cast<projection_type> (selection);
        if (selected_typ == perspective) {
            wxBitmap bitmap(doggo_1);
            dc.DrawBitmap(bitmap, 0, 0, false);
        }
        else if (selected_typ == ortogonal_front) {
            wxBitmap bitmap(doggo_2);
            dc.DrawBitmap(bitmap, 0, 0, false);
        }
        else if (selected_typ == ortogonal_up) {
            wxBitmap bitmap(doggo_3);
            dc.DrawBitmap(bitmap, 0, 0, false);
        }  
    }
}

void GUIMyFrame1::Repaint1()
{
    Repaint(m_panel_1, m_choice_projection_1->GetSelection(), data_transformed_1, projection_1);
    return;
}

void GUIMyFrame1::Repaint2()
{
    Repaint(m_panel_2, m_choice_projection_2->GetSelection(), data_transformed_2, projection_2);
    return;
}

void GUIMyFrame1::Repaint3()
{
    Repaint(m_panel_3, m_choice_projection_3->GetSelection(), data_transformed_3, projection_3);
    return;
}


void GUIMyFrame1::RefreshPoints()
{

    OldRefresh(m_choice_projection_1->GetSelection(), data_transformed_1);
    OldRefresh(m_choice_projection_2->GetSelection(), data_transformed_2);
    OldRefresh(m_choice_projection_3->GetSelection(), data_transformed_3);

    Repaint1();
    Repaint2();
    Repaint3();

    return;
}

void GUIMyFrame1::OldRefresh(int selection, std::vector<Segment>& data_transformed)
{
    //setting scala
    double Sx = (WxSB_ScaleX->GetValue() / 100.0);
    double Sy = (WxSB_ScaleY->GetValue() / 100.0);
    double Sz = (WxSB_ScaleZ->GetValue() / 100.0);

    //setting rotation
    double Rx = (360 - (double)WxSB_RotateX->GetValue()) / 180.0 * M_PI;
    double Ry = ((double)WxSB_RotateY->GetValue()) / 180.0 * M_PI;
    double Rz = ((180 + (double)WxSB_RotateZ->GetValue()) / 180.0 * M_PI);

    double Rx_2 = 0.0;
    double Ry_2 = 0.0;
    double Rz_2 = 0.0;

    //set translation
    double Tx = ((WxSB_TranslationX->GetValue() - 100.0) / 50.0);
    double Ty = -1.0 * ((WxSB_TranslationY->GetValue() - 100.0) / 50.0);
    double Tz = 1.0 + ((WxSB_TranslationZ->GetValue() - 100.0) / 50.0);

    projection_type selected_typ = static_cast<projection_type> (selection);

    double val = 0.0;
    val = closest;

    switch (selected_typ) {
    case perspective:
            Tx *= -1.0;
            Ty *= -1.0;
            Rz += M_PI;
            break;

        case axonometric_izo:
            Rx_2 += 30.0 * M_PI / 180.0;
            Ry_2 += 45.0 * M_PI / 180.0;
            Rz_2 += 22.0 * M_PI / 180.0;

            Tz += -2.0 + (fabs(closest) * 6.0);
            break;

        case oblique_cabinet:
            Tz += -2.0 + (fabs(closest) * 6.0);
            break;

        case oblique_cavalier:
            Tz += -2.0 + (fabs(closest) * 6.0);
            break;

        case ortogonal_front:
            Tz += -2.0 + (fabs(closest) * 6.0);
            break;

        case ortogonal_up:
            Rx_2 += 90.0 / 180.0 * M_PI;
            Tz += -2.0 + (fabs(closest) * 6.0);
            break;

        case ortogonal_down:
            Rx_2 -= 90.0 / 180.0 * M_PI;
            Tz += -2.0 + (fabs(closest) * 6.0);
            break;
    }

    Matrix4 scale_matrix = SetScaleMatrix(Sx, Sy, Sz);
    Matrix4 rotation_matrix = SetRotationMatrix(Rx, Ry, Rz);
    Matrix4 rotation_matrix_2 = SetRotationMatrix(Rx_2, Ry_2, Rz_2);
    Matrix4 translation_matrix = SetTranslationMatrix(Tx, Ty, Tz);
    Matrix4 t;

    t = rotation_matrix_2 * translation_matrix * rotation_matrix * scale_matrix;

    Vector4 v_begin, v_end;
    data_transformed.clear();

    for (int i = 0; i < data.size(); i++)
    {
        v_begin.Set(data[i].begin.x, data[i].begin.y, data[i].begin.z);
        v_end.Set(data[i].end.x, data[i].end.y, data[i].end.z);

        v_begin = t * v_begin;
        v_end = t * v_end;

        data_transformed.push_back(Segment(Point(v_begin.GetX(), v_begin.GetY(), v_begin.GetZ()),
            Point(v_end.GetX(), v_end.GetY(), v_end.GetZ()),
            Color(data[i].color.R, data[i].color.G, data[i].color.B)));
    }

}


void GUIMyFrame1::EnableProjectionData(std::vector <wxTextCtrl*> zmienne)
{
    for (wxTextCtrl* kontrolka : zmienne) kontrolka->Enable();
}

void GUIMyFrame1::ReadProjectionData(int selection, std::vector <wxTextCtrl*> zmienne, ProjectionParameters& projection)
{   
    double coor_x, coor_y, coor_z;
    for (int i = 0; i < 12; i+=3){
        zmienne[i]->GetValue().ToDouble(&coor_x);
        zmienne[i+1]->GetValue().ToDouble(&coor_y);
        zmienne[i+2]->GetValue().ToDouble(&coor_z);

        switch (i) {
            case 0:
                projection.vec_VRP.Set(coor_x, coor_y, coor_z);
                break;
            case 3:
                projection.vec_VPN.Set(coor_x, coor_y, coor_z);
                break;
            case 6:
                projection.vec_VUP.Set(coor_x, coor_y, coor_z);
                break;
            case 9:
                if (coor_z > 1.99) {
                    coor_z = 1.9;
                    zmienne[i + 2]->SetValue("1.99");
                }
                if (coor_z < -1.99) {
                    coor_z = -1.99;
                    zmienne[i + 2]->SetValue("-1.99");
                }
                coor_y *= m_panel_1->GetSize().x;
                coor_x *= -m_panel_1->GetSize().y;
                projection.vec_PRP.Set(coor_y, coor_x, coor_z);
                break;
        }
    }

    zmienne[12]->GetValue().ToDouble(&projection.window_size.x_begin);
    zmienne[13]->GetValue().ToDouble(&projection.window_size.x_end);
    zmienne[14]->GetValue().ToDouble(&projection.window_size.y_begin);
    zmienne[15]->GetValue().ToDouble(&projection.window_size.y_end);

    zmienne[16]->GetValue().ToDouble(&projection.front);
    zmienne[17]->GetValue().ToDouble(&projection.back);


    if (!projection.SetCenter(this))
    {
        for (int i = 3; i < 6; i++) {
            zmienne[i]->SetValue("1.0");
        }
        projection.vec_VPN.Set(1.0, 1.0, 1.0);
        projection.SetCenter(this);
    }
}


void GUIMyFrame1::SetPerspectiveProjectionData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("0.0");
    zmienne[2]->SetValue("2.0");

    zmienne[3]->SetValue("0.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("1.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("1.0");
    zmienne[8]->SetValue("0.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");
}

void GUIMyFrame1::SetAxonometricProjectionData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("0.0");
    zmienne[2]->SetValue("2.0");

    zmienne[3]->SetValue("1.0");
    zmienne[4]->SetValue("1.0");
    zmienne[5]->SetValue("1.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("1.0");
    zmienne[8]->SetValue("0.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
}

void GUIMyFrame1::SetCavalierProjectionData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("0.0");
    zmienne[2]->SetValue("2.0");

    zmienne[3]->SetValue("0.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("1.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("1.0");
    zmienne[8]->SetValue("0.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
}

void GUIMyFrame1::SetCabinetProjectionData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("0.0");
    zmienne[2]->SetValue("2.0");

    zmienne[3]->SetValue("0.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("1.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("1.0");
    zmienne[8]->SetValue("0.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
}

void GUIMyFrame1::SetOrtogonalProjectionFrontData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("0.0");
    zmienne[2]->SetValue("2.0");

    zmienne[3]->SetValue("1.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("0.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("1.0");
    zmienne[8]->SetValue("0.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
}

void GUIMyFrame1::SetOrtogonalProjectionUpData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("1.0");
    zmienne[2]->SetValue("0.0");

    zmienne[3]->SetValue("1.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("0.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("0.0");
    zmienne[8]->SetValue("-1.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
}

void GUIMyFrame1::SetOrtogonalProjectionDownData(std::vector <wxTextCtrl*> zmienne)
{
    zmienne[0]->SetValue("0.0");
    zmienne[1]->SetValue("-1.0");
    zmienne[2]->SetValue("0.0");

    zmienne[3]->SetValue("-1.0");
    zmienne[4]->SetValue("0.0");
    zmienne[5]->SetValue("0.0");

    zmienne[6]->SetValue("0.0");
    zmienne[7]->SetValue("0.0");
    zmienne[8]->SetValue("1.0");

    zmienne[9]->SetValue("0.0");
    zmienne[10]->SetValue("0.0");
    zmienne[11]->SetValue("0.0");

    for (int i = 0; i < 12; i++) zmienne[i]->Disable();
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

Matrix4 GUIMyFrame1::SetTranslationMatrix(double Tx, double Ty, double Tz)
{

    Matrix4 t;
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;

    set_matrix_v_1.Set(1.0, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, 1.0, 0.0);
    set_matrix_v_3.Set(0.0, 0.0, 1.0);
    set_matrix_v_4.Set(Tx, Ty, Tz);

    SetMatrix(t, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return t;
}

Matrix4 GUIMyFrame1::SetRotationMatrix(double Rx, double Ry, double Rz)
{

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

Matrix4 GUIMyFrame1::SetScaleMatrix(double Sx, double Sy, double Sz)
{

    Matrix4 t;
    Vector4 set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4;

    set_matrix_v_1.Set(Sx, 0.0, 0.0);
    set_matrix_v_2.Set(0.0, Sy, 0.0);
    set_matrix_v_3.Set(0.0, 0.0, Sz);
    set_matrix_v_4.Set(0.0, 0.0, 0.0);

    SetMatrix(t, set_matrix_v_1, set_matrix_v_2, set_matrix_v_3, set_matrix_v_4);

    return t;
}


bool ProjectionParameters::SetCenter(GUIMyFrame1 * frame)
{
    if (!vec_VPN.GetZ()) vec_VPN.Set(vec_VPN.GetX(), vec_VPN.GetY(), 1.0);
    double divisor = vec_VPN.ScalarMultiplication(vec_VPN);
    if (divisor == 0)
    {
        wxString error_message = wxString::Format(_(wxT("Nie można ustawić zerowego wektora decydującego o kierunku rzutowania.")));
        wxMessageBox(error_message, _("GFK projekt 39 Error"), wxOK | wxICON_ERROR, frame);
        return false;
    }
    else
    {
        double par_D = -1.0 * (vec_VPN.ScalarMultiplication(vec_VRP));
        double par_E = vec_VPN.ScalarMultiplication(vec_PRP);
        double par_t = -1.0 * (par_D + par_E) / (divisor);

        double center_x = vec_PRP.GetX() + vec_VPN.GetX() * par_t;
        double center_y = vec_PRP.GetY() + vec_VPN.GetY() * par_t;
        double center_z = vec_PRP.GetZ() + vec_VPN.GetZ() * par_t;


        vec_center_camera.Set(center_x, center_y, center_z);

        return true;
    }

}

double ProjectionParameters::GetRight() const
{
    Vector4 vec_up = vec_VUP;
    vec_up.Normalize();

    Vector4 vec_VRP_center = vec_center_camera - vec_VRP;

    double move_right = vec_VRP_center.ScalarMultiplication(vec_up);

    return window_size.x_end - move_right;

}

double ProjectionParameters::GetLeft() const
{
    Vector4 vec_up = vec_VUP;
    vec_up.Normalize();

    Vector4 vec_VRP_center = vec_center_camera - vec_VRP;

    double move_right = vec_VRP_center.ScalarMultiplication(vec_up);

    return -1.0 * (move_right - window_size.x_begin);
}

double ProjectionParameters::GetTop() const
{
    Vector4 vec_right = vec_VUP.VectorMultiplication(vec_VPN);
    vec_right.Normalize();

    Vector4 vec_VRP_center = vec_center_camera - vec_VRP;

    double move_up = vec_VRP_center.ScalarMultiplication(vec_right);

    return window_size.y_end - move_up;
}

double ProjectionParameters::GetBottom() const
{
    Vector4 vec_right = vec_VUP.VectorMultiplication(vec_VPN);
    vec_right.Normalize();

    Vector4 vec_VRP_center = vec_center_camera - vec_VRP;

    double move_up = vec_VRP_center.ScalarMultiplication(vec_right);

    return -1.0 * (move_up - window_size.y_begin);
}

double ProjectionParameters::GetNear() const {
    Vector4 window_camera = vec_PRP - vec_center_camera;
    return window_camera.GetLength();
}

double ProjectionParameters::GetFar() const
{
    return GetNear() - back;
}