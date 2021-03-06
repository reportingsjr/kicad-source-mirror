///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 22 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "widgets/text_ctrl_eval.h"

#include "dialog_edit_footprint_for_fp_editor_base.h"

///////////////////////////////////////////////////////////////////////////

DIALOG_FOOTPRINT_FP_EDITOR_BASE::DIALOG_FOOTPRINT_FP_EDITOR_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_GeneralBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	m_NoteBook = new wxNotebook( this, ID_NOTEBOOK, wxDefaultPosition, wxDefaultSize, 0 );
	m_PanelProperties = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_PanelPropertiesBoxSizer;
	m_PanelPropertiesBoxSizer = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bLeftSizer;
	bLeftSizer = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextRef = new wxStaticText( m_PanelProperties, wxID_ANY, _("Reference:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextRef->Wrap( -1 );
	bLeftSizer->Add( m_staticTextRef, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizerRef;
	bSizerRef = new wxBoxSizer( wxHORIZONTAL );
	
	m_ReferenceCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizerRef->Add( m_ReferenceCtrl, 1, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );
	
	m_button4 = new wxButton( m_PanelProperties, wxID_ANY, _("Edit"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizerRef->Add( m_button4, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	
	bLeftSizer->Add( bSizerRef, 0, wxBOTTOM|wxEXPAND, 5 );
	
	m_staticTextVal = new wxStaticText( m_PanelProperties, wxID_ANY, _("Value:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextVal->Wrap( -1 );
	bLeftSizer->Add( m_staticTextVal, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizerVal;
	bSizerVal = new wxBoxSizer( wxHORIZONTAL );
	
	m_ValueCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizerVal->Add( m_ValueCtrl, 1, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );
	
	m_button5 = new wxButton( m_PanelProperties, wxID_ANY, _("Edit"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizerVal->Add( m_button5, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	
	bLeftSizer->Add( bSizerVal, 0, wxEXPAND|wxBOTTOM, 5 );
	
	
	bLeftSizer->Add( 0, 0, 0, wxEXPAND|wxTOP|wxBOTTOM, 10 );
	
	m_staticTextDoc = new wxStaticText( m_PanelProperties, wxID_ANY, _("Document link:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDoc->Wrap( -1 );
	bLeftSizer->Add( m_staticTextDoc, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_DocCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bLeftSizer->Add( m_DocCtrl, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5 );
	
	m_staticTextKeywords = new wxStaticText( m_PanelProperties, wxID_ANY, _("Keywords:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKeywords->Wrap( -1 );
	bLeftSizer->Add( m_staticTextKeywords, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_KeywordCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bLeftSizer->Add( m_KeywordCtrl, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	bLeftSizer->Add( 0, 20, 0, wxTOP|wxBOTTOM, 10 );
	
	m_staticTextFp = new wxStaticText( m_PanelProperties, wxID_ANY, _("Footprint name in library:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFp->Wrap( -1 );
	bLeftSizer->Add( m_staticTextFp, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_FootprintNameCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bLeftSizer->Add( m_FootprintNameCtrl, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5 );
	
	m_staticTextLibNickname = new wxStaticText( m_PanelProperties, wxID_ANY, _("Library nickname:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLibNickname->Wrap( -1 );
	bLeftSizer->Add( m_staticTextLibNickname, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_LibraryNicknameCtrl = new wxTextCtrl( m_PanelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bLeftSizer->Add( m_LibraryNicknameCtrl, 0, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND, 5 );
	
	
	bLeftSizer->Add( 0, 0, 1, wxEXPAND|wxBOTTOM, 5 );
	
	
	m_PanelPropertiesBoxSizer->Add( bLeftSizer, 1, wxEXPAND, 5 );
	
	m_PropRightSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerAttrib;
	bSizerAttrib = new wxBoxSizer( wxHORIZONTAL );
	
	wxString m_AttributsCtrlChoices[] = { _("Through hole"), _("Surface mount"), _("Virtual") };
	int m_AttributsCtrlNChoices = sizeof( m_AttributsCtrlChoices ) / sizeof( wxString );
	m_AttributsCtrl = new wxRadioBox( m_PanelProperties, wxID_ANY, _("Placement Type:"), wxDefaultPosition, wxDefaultSize, m_AttributsCtrlNChoices, m_AttributsCtrlChoices, 1, wxRA_SPECIFY_COLS );
	m_AttributsCtrl->SetSelection( 0 );
	bSizerAttrib->Add( m_AttributsCtrl, 1, wxALL|wxEXPAND, 5 );
	
	wxString m_AutoPlaceCtrlChoices[] = { _("Free"), _("Locked") };
	int m_AutoPlaceCtrlNChoices = sizeof( m_AutoPlaceCtrlChoices ) / sizeof( wxString );
	m_AutoPlaceCtrl = new wxRadioBox( m_PanelProperties, wxID_ANY, _("Move and Place:"), wxDefaultPosition, wxDefaultSize, m_AutoPlaceCtrlNChoices, m_AutoPlaceCtrlChoices, 1, wxRA_SPECIFY_COLS );
	m_AutoPlaceCtrl->SetSelection( 0 );
	bSizerAttrib->Add( m_AutoPlaceCtrl, 1, wxALL|wxEXPAND, 5 );
	
	
	m_PropRightSizer->Add( bSizerAttrib, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerAutoplace;
	sbSizerAutoplace = new wxStaticBoxSizer( new wxStaticBox( m_PanelProperties, wxID_ANY, _("Auto Place:") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizerRot90;
	bSizerRot90 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText11 = new wxStaticText( sbSizerAutoplace->GetStaticBox(), wxID_ANY, _("Allow 90 degree rotation:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizerRot90->Add( m_staticText11, 0, wxRIGHT|wxLEFT, 5 );
	
	m_CostRot90Ctrl = new wxSlider( sbSizerAutoplace->GetStaticBox(), wxID_ANY, 0, 0, 10, wxDefaultPosition, wxSize( -1,-1 ), wxSL_AUTOTICKS|wxSL_HORIZONTAL|wxSL_LABELS );
	bSizerRot90->Add( m_CostRot90Ctrl, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	sbSizerAutoplace->Add( bSizerRot90, 1, 0, 5 );
	
	wxBoxSizer* bSizerRot180;
	bSizerRot180 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText12 = new wxStaticText( sbSizerAutoplace->GetStaticBox(), wxID_ANY, _("Allow 180 degree rotation:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizerRot180->Add( m_staticText12, 0, wxRIGHT|wxLEFT, 5 );
	
	m_CostRot180Ctrl = new wxSlider( sbSizerAutoplace->GetStaticBox(), wxID_ANY, 0, 0, 10, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_HORIZONTAL|wxSL_LABELS );
	bSizerRot180->Add( m_CostRot180Ctrl, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	sbSizerAutoplace->Add( bSizerRot180, 1, 0, 5 );
	
	
	m_PropRightSizer->Add( sbSizerAutoplace, 0, wxEXPAND|wxALL, 5 );
	
	wxStaticBoxSizer* sbSizerLocalProperties;
	sbSizerLocalProperties = new wxStaticBoxSizer( new wxStaticBox( m_PanelProperties, wxID_ANY, _("Local Settings:") ), wxVERTICAL );
	
	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 3, 3 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText16 = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Pad connection to zones:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	gbSizer1->Add( m_staticText16, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_ZoneConnectionChoiceChoices[] = { _("Use zone setting"), _("Solid"), _("Thermal relief"), _("None") };
	int m_ZoneConnectionChoiceNChoices = sizeof( m_ZoneConnectionChoiceChoices ) / sizeof( wxString );
	m_ZoneConnectionChoice = new wxChoice( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_ZoneConnectionChoiceNChoices, m_ZoneConnectionChoiceChoices, 0 );
	m_ZoneConnectionChoice->SetSelection( 0 );
	gbSizer1->Add( m_ZoneConnectionChoice, wxGBPosition( 0, 1 ), wxGBSpan( 1, 2 ), wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_staticline11 = new wxStaticLine( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gbSizer1->Add( m_staticline11, wxGBPosition( 1, 0 ), wxGBSpan( 1, 3 ), wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP, 3 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextInfo = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Set clearances to 0 to use netclass values."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextInfo->Wrap( -1 );
	m_staticTextInfo->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	bSizer10->Add( m_staticTextInfo, 0, wxBOTTOM, 5 );
	
	m_staticTextInfoValPos = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Positive clearance means area bigger than the pad (usual for solder mask)."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextInfoValPos->Wrap( -1 );
	m_staticTextInfoValPos->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	bSizer10->Add( m_staticTextInfoValPos, 0, 0, 5 );
	
	m_staticTextInfoValNeg = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Negative clearance means area smaller than the pad (usual for solder paste)."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextInfoValNeg->Wrap( -1 );
	m_staticTextInfoValNeg->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	bSizer10->Add( m_staticTextInfoValNeg, 0, wxBOTTOM, 5 );
	
	
	gbSizer1->Add( bSizer10, wxGBPosition( 2, 0 ), wxGBSpan( 1, 3 ), wxEXPAND, 5 );
	
	m_staticTextNetClearance = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Pad clearance:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextNetClearance->Wrap( -1 );
	m_staticTextNetClearance->SetToolTip( _("This is the local net clearance for all pad of this footprint\nIf 0, the Netclass values are used\nThis value can be superseded by a pad local value.") );
	
	gbSizer1->Add( m_staticTextNetClearance, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_NetClearanceValueCtrl = new TEXT_CTRL_EVAL( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_NetClearanceValueCtrl, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_NetClearanceUnits = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_NetClearanceUnits->Wrap( -1 );
	gbSizer1->Add( m_NetClearanceUnits, wxGBPosition( 3, 2 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_MaskClearanceTitle = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Solder mask clearance:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_MaskClearanceTitle->Wrap( -1 );
	m_MaskClearanceTitle->SetToolTip( _("This is the local clearance between pads and the solder mask\nfor this footprint\nThis value can be superseded by a pad local value.\nIf 0, the global value is used") );
	
	gbSizer1->Add( m_MaskClearanceTitle, wxGBPosition( 4, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_SolderMaskMarginCtrl = new TEXT_CTRL_EVAL( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_SolderMaskMarginCtrl->SetMinSize( wxSize( 150,-1 ) );
	
	gbSizer1->Add( m_SolderMaskMarginCtrl, wxGBPosition( 4, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_SolderMaskMarginUnits = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SolderMaskMarginUnits->Wrap( -1 );
	gbSizer1->Add( m_SolderMaskMarginUnits, wxGBPosition( 4, 2 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticTextSolderPaste = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Solder paste clearance:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSolderPaste->Wrap( -1 );
	m_staticTextSolderPaste->SetToolTip( _("This is the local clearance between pads and the solder paste\nfor this footprint.\nThis value can be superseded by a pad local values.\nThe final clearance value is the sum of this value and the clearance value ratio\nA negative value means a smaller mask size than pad size") );
	
	gbSizer1->Add( m_staticTextSolderPaste, wxGBPosition( 5, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_SolderPasteMarginCtrl = new TEXT_CTRL_EVAL( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_SolderPasteMarginCtrl, wxGBPosition( 5, 1 ), wxGBSpan( 1, 1 ), wxEXPAND, 2 );
	
	m_SolderPasteMarginUnits = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SolderPasteMarginUnits->Wrap( -1 );
	gbSizer1->Add( m_SolderPasteMarginUnits, wxGBPosition( 5, 2 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticTextRatio = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Solder paste ratio clearance:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextRatio->Wrap( -1 );
	m_staticTextRatio->SetToolTip( _("This is the local clearance ratio in per cent between pads and the solder paste\nfor this footprint.\nA value of 10 means the clearance value is 10 per cent of the pad size\nThis value can be superseded by a pad local value.\nThe final clearance value is the sum of this value and the clearance value\nA negative value means a smaller mask size than pad size.") );
	
	gbSizer1->Add( m_staticTextRatio, wxGBPosition( 6, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_SolderPasteMarginRatioCtrl = new TEXT_CTRL_EVAL( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_SolderPasteMarginRatioCtrl, wxGBPosition( 6, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxEXPAND, 2 );
	
	m_SolderPasteRatioMarginUnits = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SolderPasteRatioMarginUnits->Wrap( -1 );
	gbSizer1->Add( m_SolderPasteRatioMarginUnits, wxGBPosition( 6, 2 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticTextInfo2 = new wxStaticText( sbSizerLocalProperties->GetStaticBox(), wxID_ANY, _("Note: solder mask and paste values are used only for pads on copper layers."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextInfo2->Wrap( -1 );
	m_staticTextInfo2->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	gbSizer1->Add( m_staticTextInfo2, wxGBPosition( 7, 0 ), wxGBSpan( 1, 3 ), wxALIGN_CENTER_VERTICAL|wxTOP, 5 );
	
	
	gbSizer1->AddGrowableCol( 1 );
	
	sbSizerLocalProperties->Add( gbSizer1, 0, wxEXPAND|wxLEFT, 5 );
	
	
	m_PropRightSizer->Add( sbSizerLocalProperties, 1, wxALL|wxEXPAND, 5 );
	
	
	m_PanelPropertiesBoxSizer->Add( m_PropRightSizer, 0, 0, 5 );
	
	
	m_PanelProperties->SetSizer( m_PanelPropertiesBoxSizer );
	m_PanelProperties->Layout();
	m_PanelPropertiesBoxSizer->Fit( m_PanelProperties );
	m_NoteBook->AddPage( m_PanelProperties, _("Properties"), true );
	m_Panel3D = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain3D;
	bSizerMain3D = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( m_Panel3D, wxID_ANY, _("3D Shape Names:") ), wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	m_3D_ShapeNameListBox = new wxListBox( sbSizer4->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 200,110 ), 0, NULL, wxLB_SINGLE ); 
	m_3D_ShapeNameListBox->SetMinSize( wxSize( -1,110 ) );
	m_3D_ShapeNameListBox->SetMaxSize( wxSize( -1,200 ) );
	
	bSizer16->Add( m_3D_ShapeNameListBox, 1, wxEXPAND, 5 );
	
	
	bSizer15->Add( bSizer16, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3DButtons;
	bSizer3DButtons = new wxBoxSizer( wxVERTICAL );
	
	m_buttonBrowse = new wxButton( sbSizer4->GetStaticBox(), ID_BROWSE_3D_LIB, _("Add 3D Shape"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3DButtons->Add( m_buttonBrowse, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_buttonRemove = new wxButton( sbSizer4->GetStaticBox(), ID_REMOVE_3D_SHAPE, _("Remove 3D Shape"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3DButtons->Add( m_buttonRemove, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_buttonEdit = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, _("Edit Filename"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3DButtons->Add( m_buttonEdit, 0, wxALL|wxEXPAND, 5 );
	
	m_button6 = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, _("Configure Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3DButtons->Add( m_button6, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 5 );
	
	
	bSizer15->Add( bSizer3DButtons, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	sbSizer4->Add( bSizer15, 1, wxEXPAND, 5 );
	
	
	bSizerMain3D->Add( sbSizer4, 0, wxALL|wxEXPAND, 5 );
	
	bLowerSizer3D = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerMain3D->Add( bLowerSizer3D, 1, wxALL|wxEXPAND, 5 );
	
	
	m_Panel3D->SetSizer( bSizerMain3D );
	m_Panel3D->Layout();
	bSizerMain3D->Fit( m_Panel3D );
	m_NoteBook->AddPage( m_Panel3D, _("3D Settings"), false );
	
	m_GeneralBoxSizer->Add( m_NoteBook, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_sdbSizerStdButtons = new wxStdDialogButtonSizer();
	m_sdbSizerStdButtonsOK = new wxButton( this, wxID_OK );
	m_sdbSizerStdButtons->AddButton( m_sdbSizerStdButtonsOK );
	m_sdbSizerStdButtonsCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizerStdButtons->AddButton( m_sdbSizerStdButtonsCancel );
	m_sdbSizerStdButtons->Realize();
	
	m_GeneralBoxSizer->Add( m_sdbSizerStdButtons, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( m_GeneralBoxSizer );
	this->Layout();
	m_GeneralBoxSizer->Fit( this );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnInitDlg ) );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnEditReference ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnEditValue ), NULL, this );
	m_3D_ShapeNameListBox->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::On3DShapeNameSelected ), NULL, this );
	m_3D_ShapeNameListBox->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Edit3DShapeFilename ), NULL, this );
	m_buttonBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Add3DShape ), NULL, this );
	m_buttonRemove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Remove3DShape ), NULL, this );
	m_buttonEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Edit3DShapeFilename ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Cfg3DPath ), NULL, this );
}

DIALOG_FOOTPRINT_FP_EDITOR_BASE::~DIALOG_FOOTPRINT_FP_EDITOR_BASE()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnInitDlg ) );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnEditReference ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::OnEditValue ), NULL, this );
	m_3D_ShapeNameListBox->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::On3DShapeNameSelected ), NULL, this );
	m_3D_ShapeNameListBox->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Edit3DShapeFilename ), NULL, this );
	m_buttonBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Add3DShape ), NULL, this );
	m_buttonRemove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Remove3DShape ), NULL, this );
	m_buttonEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Edit3DShapeFilename ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_FOOTPRINT_FP_EDITOR_BASE::Cfg3DPath ), NULL, this );
	
}
