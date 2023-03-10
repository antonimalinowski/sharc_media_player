#include "MainFrame.h"
#include <wx/wx.h>

/*
Custom ID - Rules:
1. Must be positive
2. Cannot be 0 or 1
3. Cannot be from the wxID_LOWEST(4999) to wxID_HIGHEST(5999)
*/

enum IDs {
	BUTTON_ID = 2
};

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 275), wxSize(200, 50));

	CreateStatusBar();
}