//#include<iostream>
//#include<deque>
//using namespace std;
////deque没有容量的概念
////中控器可以不断开辟新的空间,指向新的缓冲区
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	int ret = d1.empty();
//	if (ret ==1)
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(16);
//	printDeque(d1);
//}
//int main()
//{
//	test01();
//	return 0;
//}