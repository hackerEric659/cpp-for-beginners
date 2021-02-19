//#include<iostream>
//#include<deque>
//using namespace std;
////插入和删除提供的数据都是迭代器
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
////对两端插入和删除
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	d1.pop_back();
//	printDeque(d1);
//	d1.pop_front();
//	printDeque(d1);
//}
//
//
////对指定位置操作
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//	d1.insert(d1.begin(), 2, 10000);
//	printDeque(d1);
//
//	//按照区间进行插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//删除操作
//	d1.erase(d1.begin(), d1.end() - 1);
//	printDeque(d1);
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}