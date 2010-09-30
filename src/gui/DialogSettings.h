// -*- C++ -*- generated by wxGlade 0.6.3

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

// begin wxGlade: ::dependencies
#include <wx/notebook.h>
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogSettings: public wxDialog {
public:
    // begin wxGlade: DialogSettings::ids
    // end wxGlade

    DialogSettings(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogSettings::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogSettings::attributes
    wxStaticBox* sizer_qos_staticbox;
    wxStaticBox* sizer_multicast_staticbox;
    wxStaticBox* sizer_fastrequest_staticbox;
    wxStaticBox* sizer_quality_staticbox;
    wxStaticBox* sizer_compresslevel_staticbox;
    wxStaticText* label_compresslevel;
    wxSlider* slider_compresslevel;
    wxStaticText* label_quality;
    wxSlider* slider_quality;
    wxCheckBox* checkbox_fastrequest;
    wxStaticText* label_fastrequest;
    wxSlider* slider_fastrequest;
    wxCheckBox* checkbox_multicast;
    wxCheckBox* checkbox_multicastNACK;
    wxStaticText* label_recvbuf;
    wxSlider* slider_recvbuf;
    wxCheckBox* checkbox_qos_ef;
    wxPanel* notebook_settings_pane_conn;
    wxCheckBox* checkbox_logfile;
    wxCheckBox* checkbox_stats_save;
    wxPanel* notebook_settings_pane_logging;
    wxNotebook* notebook_settings;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGSETTINGS_H
