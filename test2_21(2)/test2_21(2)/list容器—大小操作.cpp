//#include<iostream>
//#include<list>
//using namespace std;
//
//void printList(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//	if (L1.empty())
//	{
//		cout << "L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1��Ԫ��Ϊ:" << L1.size() << endl;
//
//		//����ָ����С
//		L1.resize(10, 10000);
//		printList(L1);
//
//		L1.resize(2);
//		printList(L1);
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}