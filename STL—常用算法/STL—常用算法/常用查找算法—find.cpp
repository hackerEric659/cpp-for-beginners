//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////find����,����ָ��Ԫ��,����ָ��Ԫ�ص�����,�Ҳ�������end������
//
////����������������
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//	//�����������Ƿ���5
//	vector<int>::iterator pos=find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//	{
//		cout << "�ҵ�Ԫ��" << *pos << endl;
//	}
//	else
//	{
//		cout << "Ϊδ�ҵ�Ԫ��" << endl;
//	}
//}
//
////�����Զ�����������
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
//	//vector<Person>::iterator it = find(v.begin(), v.end(), p2);//����,ϵͳ��֪���ǰ��������Ƚ�,���ǰ�������Ƚ�
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	//��Ҫ����==
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�Ԫ��" << endl;
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