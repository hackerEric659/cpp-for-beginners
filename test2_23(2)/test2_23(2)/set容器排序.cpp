//#include<iostream>
//#include<set>
//using namespace std;
////set����Ĭ���������Ϊ��С����
////���÷º���,�ı��������
//
//void printSet(const set<int>s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const//�º����Ƕ�()������
//	//vs2019�º�������ʱ��Ҫ��const,��Ȼ����
//	{
//		return v1 > v2;
//	}
//};
////set�����������
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	printSet(s1);
//
//	set<int,MyCompare>s2;
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(40);
//	s2.insert(50);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}