//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////ͳ��������������
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//	int num=count(v.begin(), v.end(), 40);
//	cout << num << endl;
//}
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name,int age):m_Name(name),m_Age(age){}
//	bool operator==(const Person& p)
//	{
//		return this->m_Age == p.m_Age;
//	}
//};
//void test02()
//{
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//	vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	Person p6("�����", 35);
//	int num=count(v.begin(), v.end(), p6);
//	cout << "�������ͬ����������Ϊ:" << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}