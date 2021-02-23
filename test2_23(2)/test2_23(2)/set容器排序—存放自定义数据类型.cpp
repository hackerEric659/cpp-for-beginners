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
		//�������併������
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);
	set<Person, ComparePerson>s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "����:" << it->m_Name << "\t" << "����:" << it->m_Age << endl;
	}
	//�Զ����������Ͷ���ָ���������
}
int main()
{
	test01();

	return 0;
}