#include <string>
#include <vector>
using namespace std;

class Stack {
	public:
		bool push(const string &elem);
		bool pop(string &elem);
		bool peek(string &elem);
		
		bool empty() {
			return _stack.empty();
		}
		
		bool full() {
			return _stack.size() == _stack.max_size();
		}
		
		int size() {
			return _stack.size();
		}
		
		bool find(const string &elem) const;
		int count(const string &elem) const;
		
    private:
    	vector<string> _stack;
};
