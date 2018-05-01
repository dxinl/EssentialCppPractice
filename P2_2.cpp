#include <iostream>
#include <vector>
#include <string>
using namespace std;

inline bool check_size(int size)
{
	return size > 0;
}

void pentagonal(vector<int> &v, int size)
{
	for (int i = 0; i < size; i++)
	{
		v[i] = i * (3 * i - 1) / 2;
	}
}

template <typename elemType>
void print(const vector<elemType> &v, const string &type)
{
	cout << type << endl;
	for (int i = 0, size = v.size(); i < size; i++)
	{
		elemType e = v[i];
		cout << e << ' ';
	}
}

int main()
{
	vector<int> elems(8);
	int size = 8;
	if (check_size(size))
	{
		pentagonal(elems, 8);
	}
	
	string type = "int";
	print(elems, type);
}

