//#include<iostream>
//#include<map>
//using namespace std;
////map������Ԫ�ض���pair
////��һ��Ԫ�س�Ϊkeyֵ(��ֵ),����������,�ڶ���Ԫ��Ϊvalue(ʵֵ)
////����Ԫ�ض������Ԫ�ؼ�ֵ�Զ�����
////map/multimap���ڹ���ʽ����,�ײ�ṹ���ö�����ʵ��
//
////�ŵ�:���Ը���keyֵ�����ҵ�valueֵ
////map���������ظ�keyֵԪ��
////multimap����
//
//void printMap(const map<int, int>& M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//	{
//		cout << "keyֵΪ:" << it->first << "\t" << "valueֵΪ:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����map����
//	map<int,int>m;
//	m.insert(pair<int, int>(1, 10));
//��������
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	//��������
//	map<int, int>m2 = m;
//	printMap(m2);
//
//	//�ȺŸ�ֵ
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//int main()
//{
//	test01();
//	return 0;
//}