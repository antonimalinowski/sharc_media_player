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

	wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
	this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

	CreateStatusBar();
}

void MainFrame::OnClose(wxCloseEvent& evt) {
	wxLogMessage("Frame closed");
	evt.Skip();
}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
	wxLogMessage("Button clicked");
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 1 clicked");
	evt.Skip();
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 2 clicked");
	evt.Skip();
}

