//#include<iostream>
//#include<map>
//using namespace std;
//
//void printMap(const map<int, int>& M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//	{
//		cout << "keyֵΪ:" << it->first << "\t" << "valueֵ:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	//����
//	//��һ��
//	m.insert(pair<int, int>(1, 10));
//
//	//�ڶ���
//	m.insert(make_pair(2, 20));
//
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//������,������ʹ��
//	m[4] = 40;
//	printMap(m);
//
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);//����keyֵɾ��
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}