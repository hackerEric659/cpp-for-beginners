#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class GreaterTwenty
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	int num=count_if(v.begin(), v.end(), GreaterTwenty());
	cout << num;
}
class Person
{
public:
	string m_Name;
	int m_Age;
	Person(string name, int age) :m_Name(name), m_Age(age) {}
};

class AgeGreaterTwenty
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	vector<Person>v;
	Person p1("¡ı±∏", 35);
	Person p2("πÿ”", 35);
	Person p3("’≈∑…", 35);
	Person p4("’‘‘∆", 40);
	Person p5("≤‹≤Ÿ", 20);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	int num=count_if(v.begin(), v.end(),AgeGreaterTwenty() );
	cout << num << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}