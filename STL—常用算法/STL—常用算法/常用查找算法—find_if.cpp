//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
////����������������
//
//class Find
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it=find_if(v.begin(), v.end(),Find() );
//	if (it == v.end())
//		cout << "δ�ҵ�Ԫ��" << endl;
//	else
//		cout << "�ҵ�Ԫ��" << *it << endl;
//}
//
////�����Զ�����������
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name,int age):m_Name(name),m_Age(age){}
//
//};
//
//class AgeLargerThanTwenty
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it=find_if(v.begin(), v.end(),AgeLargerThanTwenty() );
//	if (it != v.end())
//	{
//		cout << "�ҵ������" << endl;
//		cout << "������ϢΪ:" << endl
//			<< "����:" << it->m_Name << endl
//			<< "����:" << it->m_Age << endl;
//	}
//	
//	else
//		cout << "δ�ҵ������" << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}