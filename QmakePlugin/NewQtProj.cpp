//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: NewQtProj.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "NewQtProj.h"


// Declare the bitmap loading function
extern void wxCrafterM0lZAnInitBitmapResources();

static bool bBitmapLoaded = false;


NewQtProjBaseDlg::NewQtProjBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterM0lZAnInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer5);
    
    wxFlexGridSizer* fgSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer2->SetFlexibleDirection( wxBOTH );
    fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer2->AddGrowableCol(1);
    
    bSizer5->Add(fgSizer2, 0, wxALL|wxEXPAND, 5);
    
    m_staticText5 = new wxStaticText(this, wxID_ANY, _("Project name:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText5, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlProjName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlProjName->SetHint(wxT(""));
    #endif
    
    fgSizer2->Add(m_textCtrlProjName, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_staticText7 = new wxStaticText(this, wxID_ANY, _("Project path:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText7, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_dirPicker4 = new wxDirPickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a folder"), wxDefaultPosition, wxSize(-1,-1), wxDIRP_DEFAULT_STYLE);
    
    fgSizer2->Add(m_dirPicker4, 0, wxALL|wxEXPAND, 5);
    
    m_staticText13 = new wxStaticText(this, wxID_ANY, _("Project kind:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText13, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceProjKindArr;
    m_choiceProjKind = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceProjKindArr, 0);
    
    fgSizer2->Add(m_choiceProjKind, 0, wxALL|wxEXPAND, 5);
    
    m_staticText12 = new wxStaticText(this, wxID_ANY, _("QMake to use:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText12, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* boxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer2->Add(boxSizer6, 1, wxEXPAND, 5);
    
    wxArrayString m_choiceQmakeArr;
    m_choiceQmake = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceQmakeArr, 0);
    
    boxSizer6->Add(m_choiceQmake, 1, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    m_buttonSelectConfig = new wxButton(this, wxID_ANY, _("New..."), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    m_buttonSelectConfig->SetToolTip(_("Open the QMakeSettings configuration dialog"));
    
    boxSizer6->Add(m_buttonSelectConfig, 0, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer1 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Other settings:")), wxVERTICAL);
    
    bSizer5->Add(sbSizer1, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxUseSepDirectory = new wxCheckBox(this, wxID_ANY, _("Create the project under a separate directory"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxUseSepDirectory->SetValue(true);
    
    sbSizer1->Add(m_checkBoxUseSepDirectory, 0, wxALL|wxEXPAND, 5);
    
    bSizer5->Add(0, 0, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer5->Add(bSizer6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer6->Add(m_buttonCancel, 0, wxALL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    
    bSizer6->Add(m_buttonOk, 0, wxALL, 5);
    
    SetName(wxT("NewQtProjBaseDlg"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent();
    } else {
        CentreOnScreen();
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonSelectConfig->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewQtProjBaseDlg::OnNewQmakeSettings), NULL, this);
    m_buttonOk->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewQtProjBaseDlg::OnOKUI), NULL, this);
    
}

NewQtProjBaseDlg::~NewQtProjBaseDlg()
{
    m_buttonSelectConfig->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewQtProjBaseDlg::OnNewQmakeSettings), NULL, this);
    m_buttonOk->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewQtProjBaseDlg::OnOKUI), NULL, this);
    
}
