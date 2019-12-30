#include "Todo.h"

Todo::Todo(wxString v) {
	value = v;
	completed = false;
};
Todo::~Todo() {};

wxString Todo::getValue() {
	return value;
}
void Todo::setValue(wxString s) {
	value = s;
}
void Todo::toggleCompleted() {
	completed = !completed;
}