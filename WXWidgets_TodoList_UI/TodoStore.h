#pragma once
#include "wx/wx.h"
#include <vector>
#include "Todo.h"

class TodoStore {
private:
	std::vector<Todo> todoList;
	
public:
	TodoStore();
	~TodoStore();
	void addTodo(Todo t);
	std::vector<Todo> getTodos();
};





