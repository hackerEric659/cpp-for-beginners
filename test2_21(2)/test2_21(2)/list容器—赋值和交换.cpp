//#include<iostream>
//#include<list>
//using namespace std;
////给list容器赋值,以及交换list容器
//void printList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L1.begin(), L1.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//	L1.swap(L4);
//	cout << "L1:" << endl;
//	printList(L1);
//	cout << "L4:" << endl;
//	printList(L4);
//}
//int main()
//{
//	test01();
//
//	return 0;
//}