///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug  4 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_PLOT_BASE_H__
#define __DIALOG_PLOT_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class DIALOG_SHIM;
class WX_HTML_REPORT_PANEL;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/checklst.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_PLOT_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_PLOT_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		enum
		{
			ID_PRINT_REF = 1000,
			ID_ALLOW_PRINT_PAD_ON_SILKSCREEN,
			ID_MIROR_OPT,
			ID_LAYER_FAB,
			ID_SELECT_COPPER_LAYERS,
			ID_DESELECT_COPPER_LAYERS,
			ID_SELECT_ALL_LAYERS,
			ID_DESELECT_ALL_LAYERS
		};
		
		wxBoxSizer* m_MainSizer;
		wxStaticText* m_staticTextPlotFmt;
		wxChoice* m_plotFormatOpt;
		wxStaticText* m_staticTextDir;
		wxTextCtrl* m_outputDirectoryName;
		wxBitmapButton* m_browseButton;
		wxStaticBoxSizer* m_LayersSizer;
		wxCheckListBox* m_layerCheckListBox;
		wxBoxSizer* m_PlotOptionsSizer;
		wxCheckBox* m_plotSheetRef;
		wxCheckBox* m_plotModuleValueOpt;
		wxCheckBox* m_plotModuleRefOpt;
		wxCheckBox* m_plotInvisibleText;
		wxCheckBox* m_plotNoViaOnMaskOpt;
		wxCheckBox* m_excludeEdgeLayerOpt;
		wxCheckBox* m_excludePadsFromSilkscreen;
		wxCheckBox* m_useAuxOriginCheckBox;
		wxCheckBox* m_plotMirrorOpt;
		wxCheckBox* m_plotPSNegativeOpt;
		wxCheckBox* m_zoneFillCheck;
		wxStaticText* m_staticText11;
		wxChoice* m_drillShapeOpt;
		wxStaticText* m_staticText12;
		wxChoice* m_scaleOpt;
		wxStaticText* m_staticText13;
		wxChoice* m_plotModeOpt;
		wxStaticText* m_textDefaultPenSize;
		wxTextCtrl* m_linesWidth;
		wxStaticBoxSizer* m_sizerSoldMaskLayerOpt;
		wxStaticText* m_SolderMaskMarginLabel;
		wxStaticText* m_SolderMaskMarginCurrValue;
		wxStaticText* m_solderMaskMinWidthLabel;
		wxStaticText* m_SolderMaskMinWidthCurrValue;
		wxStaticBoxSizer* m_GerberOptionsSizer;
		wxCheckBox* m_useGerberExtensions;
		wxCheckBox* m_useGerberX2Attributes;
		wxCheckBox* m_useGerberNetAttributes;
		wxCheckBox* m_generateGerberJobFile;
		wxCheckBox* m_subtractMaskFromSilk;
		wxRadioBox* m_rbGerberFormat;
		wxStaticBoxSizer* m_HPGLOptionsSizer;
		wxStaticText* m_textPenSize;
		wxTextCtrl* m_HPGLPenSizeOpt;
		wxStaticBoxSizer* m_PSOptionsSizer;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_fineAdjustXscaleOpt;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_fineAdjustYscaleOpt;
		wxStaticText* m_textPSFineAdjustWidth;
		wxTextCtrl* m_PSFineAdjustWidthOpt;
		wxCheckBox* m_forcePSA4OutputOpt;
		wxStaticBoxSizer* m_SizerDXF_options;
		wxCheckBox* m_DXF_plotModeOpt;
		wxCheckBox* m_DXF_plotTextStrokeFontOpt;
		WX_HTML_REPORT_PANEL* m_messagesPanel;
		wxBoxSizer* m_sizerButtons;
		wxButton* m_buttonDRC;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Apply;
		wxButton* m_sdbSizer1Cancel;
		wxMenu* m_popMenu;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onActivate( wxActivateEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnRightClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void SetPlotFormat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOutputDirectoryBrowseClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSetScaleOpt( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGerberX2Checked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChangeDXFPlotMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void onRunDRC( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreateDrillFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void Plot( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPopUpLayers( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_PLOT_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Plot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~DIALOG_PLOT_BASE();
		
		void DIALOG_PLOT_BASEOnContextMenu( wxMouseEvent &event )
		{
			this->PopupMenu( m_popMenu, event.GetPosition() );
		}
	
};

#endif //__DIALOG_PLOT_BASE_H__
