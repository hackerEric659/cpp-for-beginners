//#include<iostream>
//#include<deque>
//using namespace std;
////dequeû�������ĸ���
////�п������Բ��Ͽ����µĿռ�,ָ���µĻ�����
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
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ" << d1.size() << endl;
//	}
//
//	//����ָ����С
//	d1.resize(16);
//	printDeque(d1);
//}
//int main()
//{
//	test01();
//	return 0;
//}