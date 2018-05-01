#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

class even_elem {
	public:
		bool operator() (int elem)
		{
			return elem%2 ? false : true;
		}
};

int main()
{
	vector<int> input;
	istream_iterator<int> in(cin), eos;
	copy(in, eos, back_inserter(input));
	
	vector<int>::iterator division = partition(input.begin(), input.end(), even_elem());
	ofstream even_file("even.txt");
	ofstream odd_file("odd.txt");
	ostream_iterator<int> even_os(even_file, " ");
	ostream_iterator<int> odd_os(odd_file, " ");
	copy(input.begin(), division, even_os);
	copy(division, input.end(), odd_os);
}
