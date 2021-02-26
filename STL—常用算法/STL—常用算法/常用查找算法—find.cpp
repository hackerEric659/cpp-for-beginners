//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////find查找,查找指定元素,返回指定元素迭代器,找不到返回end迭代器
//
////查找内置数据类型
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//	//查找容器中是否有5
//	vector<int>::iterator pos=find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//	{
//		cout << "找到元素" << *pos << endl;
//	}
//	else
//	{
//		cout << "为未找到元素" << endl;
//	}
//}
//
////查找自定义数据类型
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name,int age):m_Name(name),m_Age(age){}
//	bool operator==(const Person&p)
//	{
//		if ((this->m_Name == p.m_Name) && (this->m_Age == p.m_Age))
//			return true;
//		else
//			return false;
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
//	//vector<Person>::iterator it = find(v.begin(), v.end(), p2);//报错,系统不知道是按照姓名比较,还是按照年龄比较
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	//需要重载==
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到元素" << endl;
//		cout << it->m_Name << "\t" << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}