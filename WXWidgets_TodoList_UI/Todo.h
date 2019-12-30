#pragma once
#include "wx/wx.h"

class Todo {
private:
	wxString value;
	bool completed = false;

public:
	wxString getValue();
	void setValue(wxString s);
	void toggleCompleted();
	Todo(wxString s);
	~Todo();
};
