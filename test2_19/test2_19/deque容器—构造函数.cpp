//#include<iostream>
//#include<deque>
//using namespace std;
////deque˫������,���Զ�ͷ�����в���ɾ������
////deque�ڲ���һ���п���,ά��ÿ�λ������е�����,�������д����ʵ����
////�п����д�ŵ���ÿ���������ĵ�ַ,ʹ��ʹ��dequeʱ��һƬ�����Ŀռ�
//
//void printDeque(const deque<int>& deq)//ֻ��״̬,���ܸ�������
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