//#include<iostream>
//#include<set>
//using namespace std;
////set容器所有数据都会在插入时自动排序
////set/multiset属于关联式容器
////底层是用二叉树实现
//
////set和multiset区别(头文件都是set)
////set不允许容器中有重复元素
////mutliset允许容器中有重复元素
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert的方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//	
//
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test01();
//	return 0;
//}