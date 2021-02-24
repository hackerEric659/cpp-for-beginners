#include<iostream>
#include<map>
using namespace std;
class MyCompare
{
public:
	const bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void printMap(map<int, int,MyCompare>&M)
{
	for (map<int, int,MyCompare>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "keyֵΪ:" << it->first << "\t" << "valueֵΪ:" << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int,MyCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));
	printMap(m);

}

int main()
{
	test01();

	return 0;
}