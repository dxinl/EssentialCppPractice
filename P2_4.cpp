#include <iostream>
#include <vector>
using namespace std;

const vector<int>* pentagonal(int size)
{
	static vector<int> elems;
	
	if (size <= 0)
	    return &elems;
	    
    for (int i = elems.size(); i < size; i++)
    {
    	int tmp = i * (3 * i - 1) / 2;
    	cout << tmp << ' ';
    	elems.push_back(tmp);
	}
	cout << endl;
	
	return &elems;
}

int get(const vector<int> &v, int index)
{
	if (index < 0 || index >= v.size()) return -1;
	
	return v.at(index);
}

int main()
{
    const vector<int>* v = pentagonal(8);
    cout << get(*v, -1) << endl;
    cout << get(*v, 2) << endl;
    cout << get(*v, 8) << endl;
}
