//#include<iostream>
//#include<list>
//using namespace std;
////�������е�Ԫ�ط�ת,�Լ�����������������
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
//	//����,�õ�һ�������ڵڶ�����
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
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	//���в�֧��������ʵ�����������,����ʹ�ñ�׼�㷨
//	//��֧��������ʵ�����������,�������ṩһЩ��Ա����
//	L1.sort();
//	printList(L1);
//
//	//��������
//	L1.sort(myCompare);
//	printList(L1);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}