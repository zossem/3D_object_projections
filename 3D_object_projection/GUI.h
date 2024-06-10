///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/slider.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText211;
		wxChoice* m_choice_projection_1;
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText32;
		wxStaticText* m_staticText311;
		wxStaticText* m_staticText331;
		wxStaticText* m_staticText34;
		wxTextCtrl* m_textCtrl_VRP_x_1;
		wxTextCtrl* m_textCtrl_VRP_y_1;
		wxTextCtrl* m_textCtrl_VRP_z_1;
		wxStaticText* m_staticText351;
		wxTextCtrl* m_textCtrl_VPN_x_1;
		wxTextCtrl* m_textCtrl_VPN_y_1;
		wxTextCtrl* m_textCtrl_VPN_z_1;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_textCtrl_VUP_x_1;
		wxTextCtrl* m_textCtrl_VUP_y_1;
		wxTextCtrl* m_textCtrl_VUP_z_1;
		wxStaticText* m_staticText37;
		wxTextCtrl* m_textCtrl_PRP_x_1;
		wxTextCtrl* m_textCtrl_PRP_y_1;
		wxTextCtrl* m_textCtrl_PRP_z_1;
		wxStaticText* m_staticText38;
		wxTextCtrl* m_textCtrl_window_u_start_1;
		wxTextCtrl* m_textCtrl_window_u_stop_1;
		wxTextCtrl* m_textCtrl_window_v_start_1;
		wxTextCtrl* m_textCtrl_window_v_stop_1;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_textCtrl_Front_1;
		wxStaticText* m_staticText40;
		wxTextCtrl* m_textCtrl_Back_1;
		wxStaticText* m_staticText271;
		wxChoice* m_choice_projection_2;
		wxStaticText* m_staticText301;
		wxStaticText* m_staticText321;
		wxStaticText* m_staticText3111;
		wxStaticText* m_staticText3311;
		wxStaticText* m_staticText341;
		wxTextCtrl* m_textCtrl_VRP_x_2;
		wxTextCtrl* m_textCtrl_VRP_y_2;
		wxTextCtrl* m_textCtrl_VRP_z_2;
		wxStaticText* m_staticText3511;
		wxTextCtrl* m_textCtrl_VPN_x_2;
		wxTextCtrl* m_textCtrl_VPN_y_2;
		wxTextCtrl* m_textCtrl_VPN_z_2;
		wxStaticText* m_staticText361;
		wxTextCtrl* m_textCtrl_VUP_x_2;
		wxTextCtrl* m_textCtrl_VUP_y_2;
		wxTextCtrl* m_textCtrl_VUP_z_2;
		wxStaticText* m_staticText371;
		wxTextCtrl* m_textCtrl_PRP_x_2;
		wxTextCtrl* m_textCtrl_PRP_y_2;
		wxTextCtrl* m_textCtrl_PRP_z_2;
		wxStaticText* m_staticText381;
		wxTextCtrl* m_textCtrl_window_u_start_2;
		wxTextCtrl* m_textCtrl_window_u_stop_2;
		wxTextCtrl* m_textCtrl_window_v_start_2;
		wxTextCtrl* m_textCtrl_window_v_stop_2;
		wxStaticText* m_staticText391;
		wxTextCtrl* m_textCtrl_Front_2;
		wxStaticText* m_staticText401;
		wxTextCtrl* m_textCtrl_Back_2;
		wxStaticText* m_staticText28;
		wxChoice* m_choice_projection_3;
		wxStaticText* m_staticText302;
		wxStaticText* m_staticText322;
		wxStaticText* m_staticText3112;
		wxStaticText* m_staticText3312;
		wxStaticText* m_staticText342;
		wxTextCtrl* m_textCtrl_VRP_x_3;
		wxTextCtrl* m_textCtrl_VRP_y_3;
		wxTextCtrl* m_textCtrl_VRP_z_3;
		wxStaticText* m_staticText3512;
		wxTextCtrl* m_textCtrl_VPN_x_3;
		wxTextCtrl* m_textCtrl_VPN_y_3;
		wxTextCtrl* m_textCtrl_VPN_z_3;
		wxStaticText* m_staticText362;
		wxTextCtrl* m_textCtrl_VUP_x_3;
		wxTextCtrl* m_textCtrl_VUP_y_3;
		wxTextCtrl* m_textCtrl_VUP_z_3;
		wxStaticText* m_staticText372;
		wxTextCtrl* m_textCtrl_PRP_x_3;
		wxTextCtrl* m_textCtrl_PRP_y_3;
		wxTextCtrl* m_textCtrl_PRP_z_3;
		wxStaticText* m_staticText382;
		wxTextCtrl* m_textCtrl_window_u_start_3;
		wxTextCtrl* m_textCtrl_window_u_stop_3;
		wxTextCtrl* m_textCtrl_window_v_start_3;
		wxTextCtrl* m_textCtrl_window_v_stop_3;
		wxStaticText* m_staticText392;
		wxTextCtrl* m_textCtrl_Front_3;
		wxStaticText* m_staticText402;
		wxTextCtrl* m_textCtrl_Back_3;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText31;
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText35;

		// Virtual event handlers, override them in your derived class
		virtual void WxPanel_Repaint( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void Choice_Projection_1( wxCommandEvent& event ) { event.Skip(); }
		virtual void Text_Update_1( wxCommandEvent& event ) { event.Skip(); }
		virtual void Choice_Projection_2( wxCommandEvent& event ) { event.Skip(); }
		virtual void Text_Update_2( wxCommandEvent& event ) { event.Skip(); }
		virtual void Choice_Projection_3( wxCommandEvent& event ) { event.Skip(); }
		virtual void Text_Update_3( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_load_geometry_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Scrolls_Updated( wxScrollEvent& event ) { event.Skip(); }


	public:
		wxPanel* m_panel_1;
		wxPanel* m_panel_2;
		wxPanel* m_panel_3;
		wxButton* m_button_load_geometry;
		wxStaticText* WxST_TranslationX;
		wxSlider* WxSB_TranslationX;
		wxStaticText* WxST_TranslationY;
		wxSlider* WxSB_TranslationY;
		wxStaticText* WxST_TranslationZ;
		wxSlider* WxSB_TranslationZ;
		wxStaticText* m_staticText25;
		wxStaticText* WxST_RotateX;
		wxSlider* WxSB_RotateX;
		wxStaticText* m_staticText27;
		wxStaticText* WxST_RotateY;
		wxSlider* WxSB_RotateY;
		wxStaticText* m_staticText29;
		wxStaticText* WxST_RotateZ;
		wxSlider* WxSB_RotateZ;
		wxStaticText* WxST_ScaleX;
		wxSlider* WxSB_ScaleX;
		wxStaticText* WxST_ScaleY;
		wxSlider* WxSB_ScaleY;
		wxStaticText* WxST_ScaleZ;
		wxSlider* WxSB_ScaleZ;

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("GFK Projekt 39"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};
