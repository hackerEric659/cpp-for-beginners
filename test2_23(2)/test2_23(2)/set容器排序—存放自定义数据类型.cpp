#include<iostream>
#include<set>
#include<string>
using namespace std;

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age) :m_Name(name), m_Age(age) {}
};

class ComparePerson
{
public:
	bool operator()(Person p1, Person p2)const
	{
		//按照年龄降序排列
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	set<Person, ComparePerson>s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名:" << it->m_Name << "\t" << "年龄:" << it->m_Age << endl;
	}
	//自定义数据类型都会指定排序规则
}
int main()
{
	test01();

	return 0;
}