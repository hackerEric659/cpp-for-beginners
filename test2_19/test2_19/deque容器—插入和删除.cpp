//#include<iostream>
//#include<deque>
//using namespace std;
////�����ɾ���ṩ�����ݶ��ǵ�����
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
////�����˲����ɾ��
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
////��ָ��λ�ò���
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
//	//����������в���
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
//	//ɾ������
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