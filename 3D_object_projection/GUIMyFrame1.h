﻿#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

#include <wx/filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>
#include "vecmat.h"
#include <fstream>
#include <string>

struct Point {
float x, y, z;
Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

struct Color {
int R, G, B;
Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
};

struct Segment {
Point begin, end;
Color color;
Segment(Point _begin, Point _end, Color _color) : begin(_begin), end(_end), color(_color) {}
};

struct Window {
double x_begin, x_end, y_begin, y_end;
};

struct ProjectionParameters
{
	Vector4 vec_VRP;
	Vector4 vec_VPN;
	Vector4 vec_VUP;
	Vector4 vec_PRP;
	double front;
	double back;
	Window window_size;

	double GetRight() const { return window_size.x_end - vec_VRP.GetX(); }
	double GetLeft() const { return window_size.x_begin - vec_VRP.GetX(); }
	double GetTop() const { return window_size.y_end - vec_VRP.GetY(); }
	double GetBottom() const { return window_size.y_begin - vec_VRP.GetY(); }
	double GetNear() const { return vec_PRP.GetZ() - vec_VRP.GetZ() - front; }
	double GetFar() const { return vec_PRP.GetZ() - vec_VRP.GetZ() - back; }
};


/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void WxPanel_Repaint( wxUpdateUIEvent& event );
		void Choice_Projection_1( wxCommandEvent& event );
		void Text_Update_1( wxCommandEvent& event );
		void Choice_Projection_2( wxCommandEvent& event );
		void Text_Update_2( wxCommandEvent& event );
		void Choice_Projection_3( wxCommandEvent& event );
		void Text_Update_3( wxCommandEvent& event );
		void m_button_load_geometry_click( wxCommandEvent& event );
		void Scrolls_Updated( wxScrollEvent& event );
	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members
		void Repaint(wxPanel* m_panel, int selection, std::vector<Segment> data_transformed);
		void Repaint1();
		void Repaint2();
		void Repaint3();

		void RefreshPoints();
		void OldRefresh(int selection, std::vector<Segment> &data_transformed);

		void SetMatrix(Matrix4& matrix, Vector4& v_1, Vector4& v_2, Vector4& v_3, Vector4& v_4);//v_1 to v_4 are vertical vectors, this enable to easily set the matrix
		void ReadProjectionData1();
		void ReadProjectionData2();
		void ReadProjectionData3();

		Matrix4 PerspectiveProjection(const ProjectionParameters & projection);
		Matrix4 OrthogonalProjection(const ProjectionParameters& projection);
		Matrix4 AxonometricProjection(const ProjectionParameters& projection);
		Matrix4 LookAt(const ProjectionParameters& projection);

		Matrix4 SetTranslationMatrix(double Tx, double Ty, double Tz);
		Matrix4 SetRotationMatrix(double Rx, double Ry, double Rz);
		Matrix4 SetScaleMatrix(double Sx, double Sy, double Sz);

		std::vector<Segment> data;
		std::vector<Segment> data_transformed_1;
		std::vector<Segment> data_transformed_2;
		std::vector<Segment> data_transformed_3;

		ProjectionParameters projection_1;
		ProjectionParameters projection_2;
		ProjectionParameters projection_3;


};

#endif // __GUIMyFrame1__