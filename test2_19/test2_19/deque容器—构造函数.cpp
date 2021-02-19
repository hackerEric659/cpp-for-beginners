//#include<iostream>
//#include<deque>
//using namespace std;
////deque双端数组,可以对头部进行插入删除操作
////deque内部有一个中控器,维护每段缓冲区中的内容,缓冲区中存放真实数据
////中控区中存放的是每个缓冲区的地址,使得使用deque时像一片连续的空间
//
//void printDeque(const deque<int>& deq)//只读状态,不能更改内容
//{
//	for ( deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d1);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}