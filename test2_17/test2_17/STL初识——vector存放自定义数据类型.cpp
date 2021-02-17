//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名:" <<it->m_name << endl;
//		cout << "年龄:" <<it->m_age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*>v2;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v2.push_back(&p1);
//	v2.push_back(&p2);
//	v2.push_back(&p3);
//	v2.push_back(&p4);
//	v2.push_back(&p5);
//	for (vector<Person*>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << "姓名:" << (*it)->m_name << endl;
//		cout << "年龄:" << (*(*it)).m_age << endl;
//	}
//}
//int main()
//{
//	test02();
//	return 0;
//}