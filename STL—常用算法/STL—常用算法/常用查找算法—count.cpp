//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////统计内置数据类型
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
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//	vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	Person p6("诸葛亮", 35);
//	int num=count(v.begin(), v.end(), p6);
//	cout << "和诸葛亮同岁数的人数为:" << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}