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
//	//׼������
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//�ж�ֻҪ���鲻Ϊ��,�鿴��ͷ���鿴��β,����
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷԪ��:" << q.front().m_Name << "\t" << q.front().m_Age << endl;
//		cout << "��βԪ��:" << q.back().m_Name << "\t" << q.back().m_Age << endl;
//
//		q.pop();
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}