#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;

bool shorter(const string &a, const string &b)
{
	return a.length() < b.length();
}

int main()
{
	ifstream in_file("input.txt");
	
	istream_iterator<string> is(in_file);
	istream_iterator<string> eof;

	vector<string> v;
	copy(is, eof, back_inserter(v));
	sort(v.begin(), v.end(), shorter);
	
	ostream_iterator<string> os(cout, "\n");
	copy(v.begin(), v.end(), os);
}

