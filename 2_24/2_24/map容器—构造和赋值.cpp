//#include<iostream>
//#include<map>
//using namespace std;
////map中所有元素都是pair
////第一个元素称为key值(键值),起到索引作用,第二个元素为value(实值)
////所有元素都会根据元素键值自动排序
////map/multimap属于关联式容器,底层结构是用二叉树实现
//
////优点:可以根据key值快速找到value值
////map不允许有重复key值元素
////multimap允许
//
//void printMap(const map<int, int>& M)
//{
//	for (map<int, int>::const_iterator it = M.begin(); it != M.end(); it++)
//	{
//		cout << "key值为:" << it->first << "\t" << "value值为:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建map容器
//	map<int,int>m;
//	m.insert(pair<int, int>(1, 10));
//匿名对象
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m2 = m;
//	printMap(m2);
//
//	//等号赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//int main()
//{
//	test01();
//	return 0;
//}