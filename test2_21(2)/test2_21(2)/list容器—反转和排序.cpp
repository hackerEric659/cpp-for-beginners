//#include<iostream>
//#include<list>
//using namespace std;
////将容器中的元素反转,以及将容器中内容排序
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(50);
//	L1.push_back(40);
//	printList(L1);
//	L1.reverse();
//	printList(L1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	//降序,让第一个数大于第二个数
//	return v1 > v2;
//}
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(50);
//	L1.push_back(40);
//	cout << "排序前：" << endl;
//	printList(L1);
//	//所有不支持随机访问迭代器的容器,不能使用标准算法
//	//不支持随机访问迭代器的容器,容器会提供一些成员函数
//	L1.sort();
//	printList(L1);
//
//	//降序排列
//	L1.sort(myCompare);
//	printList(L1);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}