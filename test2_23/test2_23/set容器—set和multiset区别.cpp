#include<iostream>
#include<set>
using namespace std;
//set��������ʱ�᷵�ز�����
void test01()
{
	set<int>s;
	s.insert(10);
	pair<set<int>::iterator,bool>ret=s.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
		cout << "����ʧ��" << endl;

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