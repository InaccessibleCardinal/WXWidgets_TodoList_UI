#include "ccMain.h"
#include "Todo.h"
#include "TodoStore.h"
#include <iostream>

wxBEGIN_EVENT_TABLE(ccMain, wxFrame)
EVT_BUTTON(10001, submitButtonHandler)
wxEND_EVENT_TABLE()

ccMain::ccMain() : wxFrame(
	nullptr,
	wxID_ANY,
	"Sample Desktop UI",
	wxPoint(100, 100),
	wxSize(800, 600)
) {
	TodoStore todoStore = TodoStore();
	todoTextInput = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(300, 50));
	addTodoButton = new wxButton(this, 10001, "Add Todo", wxPoint(10, 80), wxSize(150, 50));
	listBox1 = new wxListBox(this, wxID_ANY, wxPoint(10, 150), wxSize(300, 300));
	storeCount = new wxStaticText(this, wxID_ANY, "Todos in the Store: 0", wxPoint(10, 470));
}

ccMain::~ccMain() {
	
}

void ccMain::submitButtonHandler(wxCommandEvent& e) {

	wxString value = todoTextInput->GetValue();
	int size = todoStore.getTodos().size();
	if (value.size() > 0) {
		listBox1->AppendString(value);
		todoTextInput->SetValue("");
		Todo newTodo = Todo(value);
		todoStore.addTodo(newTodo);
		storeCount->SetLabel("Todos in the Store: " + std::to_string(size + 1));
	}
	e.Skip();
}

