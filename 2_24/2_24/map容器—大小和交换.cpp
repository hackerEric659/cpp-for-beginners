//#include<iostream>
//#include<map>
//using namespace std;
//
//void printMap(const map<int, int>& M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//	{
//		cout << "key值为:" << it->first << "\t" << "value值为:" << it->second << endl;
//	}
//	cout << "\n";
//}
//
////大小操作
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1,10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为:" << m.size() << endl;
//	}
//}
//
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//	cout << "交换前:" << endl;
//	cout << "m:" << endl;
//	printMap(m);
//	cout << "m2:" << endl;
//	printMap(m2);
//
//	m.swap(m2);
//	cout << "交换后:" << endl;
//	cout << "m:" << endl;
//	printMap(m);
//	cout << "m2:" << endl;
//	printMap(m2);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}