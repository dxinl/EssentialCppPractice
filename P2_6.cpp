#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

template <typename t>
t max(t &a, t &b)
{
	return (a > b ? a : b);
}

template <typename t>
t max(const vector<t> &v)
{
	t max = v.at(0);
	for (int i = 1, size = v.size(); i < size; i++)
	{
		if (v.at(i) > max) max = v.at(i);
	}
	
	return max;
}

int main()
{
	cout << max(1, 2) << endl;
	cout << max(1.1, 2.2) << endl;
	string s1 = "test0";
	string s2 = "test1";
	cout << max(s1, s2) << endl;
	
	vector<int> integers(9);
	for (int i = 0; i < 9; i++)
	{
	    integers[i] = i;
	}
	cout << max(integers) << endl;
	
	vector<double> doubles(9);
	for (int i = 0; i < 9; i++)
	{
	    doubles[i] = i + (double) i / 10;
	}
	cout << max(doubles) << endl;

    vector<string> strs(9);
    string test = "test";
	for (int i = 0; i < 9; i++)
	{
		ostringstream s;
		s << i;
	    strs[i] = test + s.str();
	}
	cout << max(strs) << endl;

}
