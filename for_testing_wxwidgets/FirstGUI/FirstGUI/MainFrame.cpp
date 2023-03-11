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
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 255), wxSize(200, 100));

	wxStatusBar* statusBar = CreateStatusBar();
	statusBar->SetDoubleBuffered(true);

	panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
	button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = wxGetMousePosition();
	mousePos = this->ScreenToClient(mousePos);
	wxString message = wxString::Format("Mouse Event Detected (x=%d y=%d)", mousePos.x, mousePos.y);
	wxLogStatus(message);
}