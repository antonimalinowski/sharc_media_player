#include "MainFrame.h"
#include <wx/wx.h>

/*
Custom ID - Rules:
1. Must be positive
2. Cannot be 0 or 1
3. Cannot be from the wxID_LOWEST(4999) to wxID_HIGHEST(5999)
*/

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	CreateStatusBar();

	panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
}

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = evt.GetPosition();
	wxString message = wxString::Format("Mouse Event Detected (x=%d y=%d)", mousePos.x, mousePos.y);
	wxLogStatus(message);
}