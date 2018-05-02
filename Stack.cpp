#include <iostream>
#include <algorithm>
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

bool Stack::find(const string &elem) const {
	vector<string>::const_iterator end_it = _stack.end();
	return ::find(_stack.begin(), end_it, elem) != end_it;
}
		
int Stack::count(const string &elem) const {
	return ::count(_stack.begin(), _stack.end(), elem);
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
	
	cin.clear();
	cin >> str;
	cout << stack.find(str) << endl;
	
	cin >> str;
	cout << stack.count(str) << endl;
	
	while (stack.size()) {
		if (stack.pop(str)) {
			cout << str << ' ';
		}
	}
}
