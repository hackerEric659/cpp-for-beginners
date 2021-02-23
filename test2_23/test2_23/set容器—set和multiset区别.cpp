#include<iostream>
#include<set>
using namespace std;
//set插入数据时会返回插入结果
void test01()
{
	set<int>s;
	s.insert(10);
	pair<set<int>::iterator,bool>ret=s.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
		cout << "插入失败" << endl;

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	

}


int main()
{
	test01();

	return 0;
}