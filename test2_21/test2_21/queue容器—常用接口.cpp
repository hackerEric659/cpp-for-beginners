//#include<iostream>
//#include<queue>
//using namespace std;
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//};
//
//
//void test01()
//{
//	queue<Person>q;
//
//	//准备数据
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 900);
//	Person p4("沙僧", 800);
//
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//判断只要队伍不为空,查看队头，查看队尾,出队
//	while (!q.empty())
//	{
//		//查看队头
//		cout << "队头元素:" << q.front().m_Name << "\t" << q.front().m_Age << endl;
//		cout << "队尾元素:" << q.back().m_Name << "\t" << q.back().m_Age << endl;
//
//		q.pop();
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}