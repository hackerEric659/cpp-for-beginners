//#include<iostream>
//#include<map>
//using namespace std;
//
//void printMap(const map<int, int>& M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//	{
//		cout << "key值为:" << it->first << "\t" << "value值:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	//插入
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//
//	//第二种
//	m.insert(make_pair(2, 20));
//
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种,不建议使用
//	m[4] = 40;
//	printMap(m);
//
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);//按照key值删除
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}