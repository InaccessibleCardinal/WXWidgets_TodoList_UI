#pragma once

#include "wx/wx.h"
#include "ccMain.h"

class ccApp : public wxApp {
public:
	ccApp();
	~ccApp();

private:
	ccMain* rootFrame = nullptr;

public:
	virtual bool OnInit();
};