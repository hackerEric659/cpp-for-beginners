#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
void printVector(vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(2);
	cout << "ÅÅÐòÇ°:" << endl;
	printVector(v1);
	cout << "ÅÅÐòºó:" << endl;
	sort(v1.begin(), v1.end());
	printVector(v1);
}
int main()
{
	test01();
	return 0;
}