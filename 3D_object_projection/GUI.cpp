///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 700,600 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_panel_1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer4->Add( m_panel_1, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText211 = new wxStaticText( this, wxID_ANY, _("rodzaj rzutu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	bSizer9->Add( m_staticText211, 0, wxALL, 5 );

	wxString m_choice_projection_1Choices[] = { _("perspektywiczny"), _("axonometryczny (izometryczny)"), _("axonometryczny (dowolny)"), _("ukośny (gabinetowy)"), _("ukośny (kawaleryjski)"), _("ukośny (dowolny)"), _("ortogonalny (przód)"), _("ortogonalny (góra)"), _("ortogonalny (dół)") };
	int m_choice_projection_1NChoices = sizeof( m_choice_projection_1Choices ) / sizeof( wxString );
	m_choice_projection_1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_projection_1NChoices, m_choice_projection_1Choices, 0 );
	m_choice_projection_1->SetSelection( 0 );
	bSizer9->Add( m_choice_projection_1, 0, wxALL, 5 );


	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText30 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer3->Add( m_staticText30, 0, wxALL, 5 );

	m_staticText32 = new wxStaticText( this, wxID_ANY, _("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgSizer3->Add( m_staticText32, 0, wxALL, 5 );

	m_staticText311 = new wxStaticText( this, wxID_ANY, _("y"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText311->Wrap( -1 );
	fgSizer3->Add( m_staticText311, 0, wxALL, 5 );

	m_staticText331 = new wxStaticText( this, wxID_ANY, _("z"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331->Wrap( -1 );
	fgSizer3->Add( m_staticText331, 0, wxALL, 5 );

	m_staticText34 = new wxStaticText( this, wxID_ANY, _("VRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	fgSizer3->Add( m_staticText34, 0, wxALL, 5 );

	m_textCtrl_VRP_x_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VRP_x_1, 0, wxALL, 5 );

	m_textCtrl_VRP_y_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VRP_y_1, 0, wxALL, 5 );

	m_textCtrl_VRP_z_1 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VRP_z_1, 0, wxALL, 5 );

	m_staticText351 = new wxStaticText( this, wxID_ANY, _("VPN"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText351->Wrap( -1 );
	fgSizer3->Add( m_staticText351, 0, wxALL, 5 );

	m_textCtrl_VPN_x_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VPN_x_1, 0, wxALL, 5 );

	m_textCtrl_VPN_y_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VPN_y_1, 0, wxALL, 5 );

	m_textCtrl_VPN_z_1 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VPN_z_1, 0, wxALL, 5 );

	m_staticText36 = new wxStaticText( this, wxID_ANY, _("VUP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer3->Add( m_staticText36, 0, wxALL, 5 );

	m_textCtrl_VUP_x_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VUP_x_1, 0, wxALL, 5 );

	m_textCtrl_VUP_y_1 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VUP_y_1, 0, wxALL, 5 );

	m_textCtrl_VUP_z_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_VUP_z_1, 0, wxALL, 5 );

	m_staticText37 = new wxStaticText( this, wxID_ANY, _("PRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	fgSizer3->Add( m_staticText37, 0, wxALL, 5 );

	m_textCtrl_PRP_x_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_PRP_x_1, 0, wxALL, 5 );

	m_textCtrl_PRP_y_1 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_PRP_y_1, 0, wxALL, 5 );

	m_textCtrl_PRP_z_1 = new wxTextCtrl( this, wxID_ANY, _("2.2"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer3->Add( m_textCtrl_PRP_z_1, 0, wxALL, 5 );


	bSizer4->Add( fgSizer3, 0, wxEXPAND, 5 );

	m_staticText38 = new wxStaticText( this, wxID_ANY, _("okno:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer4->Add( m_staticText38, 0, wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl_window_u_start_1 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer22->Add( m_textCtrl_window_u_start_1, 0, wxALL, 5 );

	m_textCtrl_window_u_stop_1 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer22->Add( m_textCtrl_window_u_stop_1, 0, wxALL, 5 );

	m_textCtrl_window_v_start_1 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer22->Add( m_textCtrl_window_v_start_1, 0, wxALL, 5 );

	m_textCtrl_window_v_stop_1 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer22->Add( m_textCtrl_window_v_stop_1, 0, wxALL, 5 );


	bSizer4->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, _("F"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer23->Add( m_staticText39, 0, wxALL, 5 );

	m_textCtrl_Front_1 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_textCtrl_Front_1, 0, wxALL, 5 );


	bSizer4->Add( bSizer23, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText40 = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer24->Add( m_staticText40, 0, wxALL, 5 );

	m_textCtrl_Back_1 = new wxTextCtrl( this, wxID_ANY, _("-3.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_textCtrl_Back_1, 0, wxALL, 5 );


	bSizer4->Add( bSizer24, 0, wxEXPAND, 5 );


	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_panel_2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer5->Add( m_panel_2, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText271 = new wxStaticText( this, wxID_ANY, _("rodzaj rzutu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText271->Wrap( -1 );
	bSizer10->Add( m_staticText271, 0, wxALL, 5 );

	wxString m_choice_projection_2Choices[] = { _("perspektywiczny"), _("axonometryczny (izometryczny)"), _("axonometryczny (dowolny)"), _("ukośny (gabinetowy)"), _("ukośny (kawaleryjski)"), _("ukośny (dowolny)"), _("ortogonalny (przód)"), _("ortogonalny (góra)"), _("ortogonalny (dół)") };
	int m_choice_projection_2NChoices = sizeof( m_choice_projection_2Choices ) / sizeof( wxString );
	m_choice_projection_2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_projection_2NChoices, m_choice_projection_2Choices, 0 );
	m_choice_projection_2->SetSelection( 6 );
	bSizer10->Add( m_choice_projection_2, 0, wxALL, 5 );


	bSizer5->Add( bSizer10, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer31;
	fgSizer31 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer31->SetFlexibleDirection( wxBOTH );
	fgSizer31->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText301 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText301->Wrap( -1 );
	fgSizer31->Add( m_staticText301, 0, wxALL, 5 );

	m_staticText321 = new wxStaticText( this, wxID_ANY, _("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321->Wrap( -1 );
	fgSizer31->Add( m_staticText321, 0, wxALL, 5 );

	m_staticText3111 = new wxStaticText( this, wxID_ANY, _("y"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3111->Wrap( -1 );
	fgSizer31->Add( m_staticText3111, 0, wxALL, 5 );

	m_staticText3311 = new wxStaticText( this, wxID_ANY, _("z"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311->Wrap( -1 );
	fgSizer31->Add( m_staticText3311, 0, wxALL, 5 );

	m_staticText341 = new wxStaticText( this, wxID_ANY, _("VRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText341->Wrap( -1 );
	fgSizer31->Add( m_staticText341, 0, wxALL, 5 );

	m_textCtrl_VRP_x_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VRP_x_2, 0, wxALL, 5 );

	m_textCtrl_VRP_y_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VRP_y_2, 0, wxALL, 5 );

	m_textCtrl_VRP_z_2 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VRP_z_2, 0, wxALL, 5 );

	m_staticText3511 = new wxStaticText( this, wxID_ANY, _("VPN"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3511->Wrap( -1 );
	fgSizer31->Add( m_staticText3511, 0, wxALL, 5 );

	m_textCtrl_VPN_x_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VPN_x_2, 0, wxALL, 5 );

	m_textCtrl_VPN_y_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VPN_y_2, 0, wxALL, 5 );

	m_textCtrl_VPN_z_2 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VPN_z_2, 0, wxALL, 5 );

	m_staticText361 = new wxStaticText( this, wxID_ANY, _("VUP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText361->Wrap( -1 );
	fgSizer31->Add( m_staticText361, 0, wxALL, 5 );

	m_textCtrl_VUP_x_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VUP_x_2, 0, wxALL, 5 );

	m_textCtrl_VUP_y_2 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VUP_y_2, 0, wxALL, 5 );

	m_textCtrl_VUP_z_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_VUP_z_2, 0, wxALL, 5 );

	m_staticText371 = new wxStaticText( this, wxID_ANY, _("PRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText371->Wrap( -1 );
	fgSizer31->Add( m_staticText371, 0, wxALL, 5 );

	m_textCtrl_PRP_x_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_PRP_x_2, 0, wxALL, 5 );

	m_textCtrl_PRP_y_2 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_PRP_y_2, 0, wxALL, 5 );

	m_textCtrl_PRP_z_2 = new wxTextCtrl( this, wxID_ANY, _("2.2"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer31->Add( m_textCtrl_PRP_z_2, 0, wxALL, 5 );


	bSizer5->Add( fgSizer31, 0, wxEXPAND, 5 );

	m_staticText381 = new wxStaticText( this, wxID_ANY, _("okno:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText381->Wrap( -1 );
	bSizer5->Add( m_staticText381, 0, wxALL, 5 );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl_window_u_start_2 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer221->Add( m_textCtrl_window_u_start_2, 0, wxALL, 5 );

	m_textCtrl_window_u_stop_2 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer221->Add( m_textCtrl_window_u_stop_2, 0, wxALL, 5 );

	m_textCtrl_window_v_start_2 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer221->Add( m_textCtrl_window_v_start_2, 0, wxALL, 5 );

	m_textCtrl_window_v_stop_2 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer221->Add( m_textCtrl_window_v_stop_2, 0, wxALL, 5 );


	bSizer5->Add( bSizer221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer231;
	bSizer231 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText391 = new wxStaticText( this, wxID_ANY, _("F"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText391->Wrap( -1 );
	bSizer231->Add( m_staticText391, 0, wxALL, 5 );

	m_textCtrl_Front_2 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer231->Add( m_textCtrl_Front_2, 0, wxALL, 5 );


	bSizer5->Add( bSizer231, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText401 = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText401->Wrap( -1 );
	bSizer241->Add( m_staticText401, 0, wxALL, 5 );

	m_textCtrl_Back_2 = new wxTextCtrl( this, wxID_ANY, _("-3.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( m_textCtrl_Back_2, 0, wxALL, 5 );


	bSizer5->Add( bSizer241, 0, wxEXPAND, 5 );


	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_panel_3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer6->Add( m_panel_3, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText28 = new wxStaticText( this, wxID_ANY, _("rodzaj rzutu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer11->Add( m_staticText28, 0, wxALL, 5 );

	wxString m_choice_projection_3Choices[] = { _("perspektywiczny"), _("axonometryczny (izometryczny)"), _("axonometryczny (dowolny)"), _("ukośny (gabinetowy)"), _("ukośny (kawaleryjski)"), _("ukośny (dowolny)"), _("ortogonalny (przód)"), _("ortogonalny (góra)"), _("ortogonalny (dół)") };
	int m_choice_projection_3NChoices = sizeof( m_choice_projection_3Choices ) / sizeof( wxString );
	m_choice_projection_3 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_projection_3NChoices, m_choice_projection_3Choices, 0 );
	m_choice_projection_3->SetSelection( 7 );
	bSizer11->Add( m_choice_projection_3, 0, wxALL, 5 );


	bSizer6->Add( bSizer11, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer32;
	fgSizer32 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer32->SetFlexibleDirection( wxBOTH );
	fgSizer32->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText302 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText302->Wrap( -1 );
	fgSizer32->Add( m_staticText302, 0, wxALL, 5 );

	m_staticText322 = new wxStaticText( this, wxID_ANY, _("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText322->Wrap( -1 );
	fgSizer32->Add( m_staticText322, 0, wxALL, 5 );

	m_staticText3112 = new wxStaticText( this, wxID_ANY, _("y"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3112->Wrap( -1 );
	fgSizer32->Add( m_staticText3112, 0, wxALL, 5 );

	m_staticText3312 = new wxStaticText( this, wxID_ANY, _("z"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3312->Wrap( -1 );
	fgSizer32->Add( m_staticText3312, 0, wxALL, 5 );

	m_staticText342 = new wxStaticText( this, wxID_ANY, _("VRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText342->Wrap( -1 );
	fgSizer32->Add( m_staticText342, 0, wxALL, 5 );

	m_textCtrl_VRP_x_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VRP_x_3, 0, wxALL, 5 );

	m_textCtrl_VRP_y_3 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VRP_y_3, 0, wxALL, 5 );

	m_textCtrl_VRP_z_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VRP_z_3, 0, wxALL, 5 );

	m_staticText3512 = new wxStaticText( this, wxID_ANY, _("VPN"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3512->Wrap( -1 );
	fgSizer32->Add( m_staticText3512, 0, wxALL, 5 );

	m_textCtrl_VPN_x_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VPN_x_3, 0, wxALL, 5 );

	m_textCtrl_VPN_y_3 = new wxTextCtrl( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VPN_y_3, 0, wxALL, 5 );

	m_textCtrl_VPN_z_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VPN_z_3, 0, wxALL, 5 );

	m_staticText362 = new wxStaticText( this, wxID_ANY, _("VUP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText362->Wrap( -1 );
	fgSizer32->Add( m_staticText362, 0, wxALL, 5 );

	m_textCtrl_VUP_x_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VUP_x_3, 0, wxALL, 5 );

	m_textCtrl_VUP_y_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VUP_y_3, 0, wxALL, 5 );

	m_textCtrl_VUP_z_3 = new wxTextCtrl( this, wxID_ANY, _("-1.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_VUP_z_3, 0, wxALL, 5 );

	m_staticText372 = new wxStaticText( this, wxID_ANY, _("PRP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText372->Wrap( -1 );
	fgSizer32->Add( m_staticText372, 0, wxALL, 5 );

	m_textCtrl_PRP_x_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_PRP_x_3, 0, wxALL, 5 );

	m_textCtrl_PRP_y_3 = new wxTextCtrl( this, wxID_ANY, _("2.2"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_PRP_y_3, 0, wxALL, 5 );

	m_textCtrl_PRP_z_3 = new wxTextCtrl( this, wxID_ANY, _("0.0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer32->Add( m_textCtrl_PRP_z_3, 0, wxALL, 5 );


	bSizer6->Add( fgSizer32, 0, wxEXPAND, 5 );

	m_staticText382 = new wxStaticText( this, wxID_ANY, _("okno:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText382->Wrap( -1 );
	bSizer6->Add( m_staticText382, 0, wxALL, 5 );

	wxBoxSizer* bSizer222;
	bSizer222 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl_window_u_start_3 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer222->Add( m_textCtrl_window_u_start_3, 0, wxALL, 5 );

	m_textCtrl_window_u_stop_3 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer222->Add( m_textCtrl_window_u_stop_3, 0, wxALL, 5 );

	m_textCtrl_window_v_start_3 = new wxTextCtrl( this, wxID_ANY, _("-1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer222->Add( m_textCtrl_window_v_start_3, 0, wxALL, 5 );

	m_textCtrl_window_v_stop_3 = new wxTextCtrl( this, wxID_ANY, _("1.1"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer222->Add( m_textCtrl_window_v_stop_3, 0, wxALL, 5 );


	bSizer6->Add( bSizer222, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer232;
	bSizer232 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText392 = new wxStaticText( this, wxID_ANY, _("F"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText392->Wrap( -1 );
	bSizer232->Add( m_staticText392, 0, wxALL, 5 );

	m_textCtrl_Front_3 = new wxTextCtrl( this, wxID_ANY, _("2.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer232->Add( m_textCtrl_Front_3, 0, wxALL, 5 );


	bSizer6->Add( bSizer232, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer242;
	bSizer242 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText402 = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText402->Wrap( -1 );
	bSizer242->Add( m_staticText402, 0, wxALL, 5 );

	m_textCtrl_Back_3 = new wxTextCtrl( this, wxID_ANY, _("-3.0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer242->Add( m_textCtrl_Back_3, 0, wxALL, 5 );


	bSizer6->Add( bSizer242, 0, wxEXPAND, 5 );


	bSizer3->Add( bSizer6, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_button_load_geometry = new wxButton( this, wxID_ANY, _("Wczytaj Geometrię"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button_load_geometry, 0, wxALIGN_CENTER, 5 );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText19 = new wxStaticText( this, wxID_ANY, _("Translacja X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer12->Add( m_staticText19, 0, wxALL, 5 );

	WxST_TranslationX = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_TranslationX->Wrap( -1 );
	WxST_TranslationX->SetMinSize( wxSize( 30,-1 ) );

	bSizer12->Add( WxST_TranslationX, 0, wxALL, 5 );


	fgSizer1->Add( bSizer12, 0, wxEXPAND, 5 );

	WxSB_TranslationX = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_TranslationX->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_TranslationX, 0, wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, _("Translacja Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer13->Add( m_staticText21, 0, wxALL, 5 );

	WxST_TranslationY = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_TranslationY->Wrap( -1 );
	bSizer13->Add( WxST_TranslationY, 0, wxALL, 5 );


	fgSizer1->Add( bSizer13, 0, wxEXPAND, 5 );

	WxSB_TranslationY = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_TranslationY->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_TranslationY, 0, wxALL, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, _("Translacja Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer15->Add( m_staticText23, 0, wxALL, 5 );

	WxST_TranslationZ = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_TranslationZ->Wrap( -1 );
	bSizer15->Add( WxST_TranslationZ, 0, wxALL, 5 );


	fgSizer1->Add( bSizer15, 0, wxEXPAND, 5 );

	WxSB_TranslationZ = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_TranslationZ->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_TranslationZ, 0, wxALL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText25 = new wxStaticText( this, wxID_ANY, _("Obrót X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer16->Add( m_staticText25, 0, wxALL, 5 );

	WxST_RotateX = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateX->Wrap( -1 );
	bSizer16->Add( WxST_RotateX, 0, wxALL, 5 );


	fgSizer1->Add( bSizer16, 0, wxEXPAND, 5 );

	WxSB_RotateX = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateX->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_RotateX, 0, wxALL, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, _("Obrót Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer17->Add( m_staticText27, 0, wxALL, 5 );

	WxST_RotateY = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateY->Wrap( -1 );
	bSizer17->Add( WxST_RotateY, 0, wxALL, 5 );


	fgSizer1->Add( bSizer17, 0, wxEXPAND, 5 );

	WxSB_RotateY = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateY->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_RotateY, 0, wxALL, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, _("Obrót Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer18->Add( m_staticText29, 0, wxALL, 5 );

	WxST_RotateZ = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateZ->Wrap( -1 );
	bSizer18->Add( WxST_RotateZ, 0, wxALL, 5 );


	fgSizer1->Add( bSizer18, 0, wxEXPAND, 5 );

	WxSB_RotateZ = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateZ->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_RotateZ, 0, wxALL, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, _("Skala X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer19->Add( m_staticText31, 0, wxALL, 5 );

	WxST_ScaleX = new wxStaticText( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_ScaleX->Wrap( -1 );
	bSizer19->Add( WxST_ScaleX, 0, wxALL, 5 );


	fgSizer1->Add( bSizer19, 0, wxEXPAND, 5 );

	WxSB_ScaleX = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_ScaleX->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_ScaleX, 0, wxALL, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText33 = new wxStaticText( this, wxID_ANY, _("Skala Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer20->Add( m_staticText33, 0, wxALL, 5 );

	WxST_ScaleY = new wxStaticText( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_ScaleY->Wrap( -1 );
	bSizer20->Add( WxST_ScaleY, 0, wxALL, 5 );


	fgSizer1->Add( bSizer20, 0, wxEXPAND, 5 );

	WxSB_ScaleY = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_ScaleY->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_ScaleY, 0, wxALL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, _("Skala Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer21->Add( m_staticText35, 0, wxALL, 5 );

	WxST_ScaleZ = new wxStaticText( this, wxID_ANY, _("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_ScaleZ->Wrap( -1 );
	bSizer21->Add( WxST_ScaleZ, 0, wxALL, 5 );


	fgSizer1->Add( bSizer21, 0, wxEXPAND, 5 );

	WxSB_ScaleZ = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_ScaleZ->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( WxSB_ScaleZ, 0, wxALL, 5 );


	bSizer2->Add( fgSizer1, 0, wxEXPAND, 5 );


	bSizer3->Add( bSizer2, 0, wxALIGN_CENTER, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_panel_1->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_1->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_1 ), NULL, this );
	m_textCtrl_VRP_x_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VRP_y_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VRP_z_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_x_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_y_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_z_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_x_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_y_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_z_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_x_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_y_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_z_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_u_start_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_u_stop_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_v_start_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_v_stop_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_Front_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_Back_1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_panel_2->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_2->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_2 ), NULL, this );
	m_textCtrl_VRP_x_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VRP_y_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VRP_z_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_x_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_y_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_z_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_x_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_y_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_z_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_x_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_y_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_z_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_u_start_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_u_stop_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_v_start_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_v_stop_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_Front_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_Back_2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_panel_3->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_3->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_3 ), NULL, this );
	m_textCtrl_VRP_x_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VRP_y_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VRP_z_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_x_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_y_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_z_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_x_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_y_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_z_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_x_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_y_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_z_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_u_start_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_u_stop_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_v_start_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_v_stop_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_Front_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_Back_3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_button_load_geometry->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_load_geometry_click ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_panel_1->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_1->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_1 ), NULL, this );
	m_textCtrl_VRP_x_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VRP_y_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VRP_z_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_x_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_y_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VPN_z_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_x_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_y_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_VUP_z_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_x_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_y_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_PRP_z_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_u_start_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_u_stop_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_v_start_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_window_v_stop_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_Front_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_textCtrl_Back_1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_1 ), NULL, this );
	m_panel_2->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_2->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_2 ), NULL, this );
	m_textCtrl_VRP_x_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VRP_y_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VRP_z_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_x_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_y_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VPN_z_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_x_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_y_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_VUP_z_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_x_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_y_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_PRP_z_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_u_start_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_u_stop_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_v_start_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_window_v_stop_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_Front_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_textCtrl_Back_2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_2 ), NULL, this );
	m_panel_3->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_choice_projection_3->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::Choice_Projection_3 ), NULL, this );
	m_textCtrl_VRP_x_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VRP_y_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VRP_z_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_x_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_y_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VPN_z_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_x_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_y_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_VUP_z_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_x_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_y_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_PRP_z_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_u_start_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_u_stop_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_v_start_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_window_v_stop_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_Front_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_textCtrl_Back_3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::Text_Update_3 ), NULL, this );
	m_button_load_geometry->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_load_geometry_click ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_TranslationZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );
	WxSB_ScaleZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::Scrolls_Updated ), NULL, this );

}