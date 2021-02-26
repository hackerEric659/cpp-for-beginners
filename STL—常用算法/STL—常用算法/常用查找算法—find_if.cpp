//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
////查找内置数据类型
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
//		cout << "未找到元素" << endl;
//	else
//		cout << "找到元素" << *it << endl;
//}
//
////查找自定义数据类型
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
//		cout << "找到这个人" << endl;
//		cout << "个人信息为:" << endl
//			<< "姓名:" << it->m_Name << endl
//			<< "年龄:" << it->m_Age << endl;
//	}
//	
//	else
//		cout << "未找到这个人" << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}