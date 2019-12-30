#include "TodoStore.h"
#include "wx/wx.h"
#include <vector>

TodoStore::TodoStore() {
	std::vector<Todo> todoList;
}

TodoStore::~TodoStore() {}

void TodoStore::addTodo(Todo t) {
	//todoList.insert(t);
	todoList.insert(todoList.end(), t);
}

std::vector<Todo> TodoStore::getTodos() {
	return todoList;
}
