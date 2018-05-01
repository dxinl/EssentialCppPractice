#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <functional>
#include <iterator>
using namespace std;

int main()
{
	string excl[6] = {string("a"), string("an"), string("the"), string("or"), string("and"), string("but")};
	set<string> excl_set;
	for (int i = 0; i < 6; i++) {
		excl_set.insert(excl[i]);
	}
	ifstream in_file("input.txt");
	
	istream_iterator<string> is(in_file);
	istream_iterator<string> eof;
	
	map<string, int> words;
	vector<string> v;
	copy(is, eof, back_inserter(v));
	vector<string>::const_iterator begin = v.begin();
	vector<string>::const_iterator end = v.end();
	for (; begin != end; ++begin)
	{
		if (excl_set.count(*begin)) continue;
		words[*begin]++;
	}
	
	map<string, int>::const_iterator b = words.begin();
	map<string, int>::const_iterator e = words.end();
	for (; b != e; ++b)
	{
		cout << b->first << ", " << b->second << endl;
	}
}
