#include "ccApp.h"
//macro that tells wx widgets to implement WinMain
wxIMPLEMENT_APP(ccApp);

ccApp::ccApp() {}

ccApp::~ccApp() {}

bool ccApp::OnInit() {
	rootFrame = new ccMain();
	rootFrame->Show(true);
	return true;
}