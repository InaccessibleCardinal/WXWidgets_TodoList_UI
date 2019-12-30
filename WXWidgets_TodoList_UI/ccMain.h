#pragma once

#include "wx/wx.h"
#include "Todo.h"
#include "TodoStore.h"

class ccMain : public wxFrame {

public:
	ccMain();
	~ccMain();
public:
	TodoStore todoStore;
	wxButton* addTodoButton = nullptr;
	wxTextCtrl* todoTextInput = nullptr;
	wxListBox* listBox1 = nullptr;
	wxStaticText* storeCount;
	//wxButton* closeAppButton = nullptr;

	void submitButtonHandler(wxCommandEvent& e);
	
	wxDECLARE_EVENT_TABLE();
};