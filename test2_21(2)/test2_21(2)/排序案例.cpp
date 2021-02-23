#include<iostream>
#include<list>
#include<string>
using namespace std;
//按照年龄进行升序,如果年龄相同按照身高进行升序,如果身高相同按照体重降序
class Person
{
public:
	Person(string name, int age, int height,int weight)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
		this->m_Weight = weight;
	}
	string m_Name;
	int m_Age;
	int m_Height;
	int m_Weight;
};

//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		if (p1.m_Height == p2.m_Height)
		{
			return p1.m_Weight > p2.m_Weight;
		}
		else
			return p1.m_Height < p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名为:" << it->m_Name <<"\t";
		cout << "年龄为:" << it->m_Age <<"\t";
		cout << "身高为:" << it->m_Height <<"\t";
		cout << "体重为:" << it->m_Weight << endl;
	}
}
void test01()
{
	list<Person>L1;
	Person p1("刘备", 35, 175,180);
	Person p2("曹操", 35, 175,181);
	Person p3("孙权", 40, 170,150);
	Person p4("赵云", 25, 190,190);
	Person p5("张飞", 35, 160,185);
	Person p6("关羽", 35, 200, 200);

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);
	printList(L1);
	cout << endl << "________________________________________________" << endl;
	cout << "排序后" << endl;
	L1.sort(comparePerson);
	printList(L1);

}

int main()
{
	test01();

	return 0;
}