#include <iostream>
#include "Stack.h"
using namespace std;

bool Stack::pop(string &elem) {
	if (empty()) {
	    return false;
	}
	
	elem = _stack.back();
	_stack.pop_back();
	return true;
}

bool Stack::peek(string &elem) {
	if (empty()) {
		return false;
	}
	
	elem = _stack.back();
	return true;
}

bool Stack::push(const string &elem) {
	if (full()) {
		return false;
	}
	
	_stack.push_back(elem);
	return true;
}

int main() {
	Stack stack;
	string str;
	
	while (cin >> str && !stack.full()) {
		stack.push(str);
	}
	
	if (stack.empty()) {
		cout << "empty" << endl;
		return 0;
	}
	
	cout << stack.size() << " " << (stack.peek(str) ? str : "null") << " " << stack.size() << endl;
	
	while (stack.size()) {
		if (stack.pop(str)) {
			cout << str << ' ';
		}
	}
}
