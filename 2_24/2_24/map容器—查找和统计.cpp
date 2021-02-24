//#include<iostream>
//#include<map>
//using namespace std;
////map容器查找
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	map<int,int>::iterator it=m.find(3);//返回迭代器
//	if (it != m.end())
//	{
//		cout << "找到了元素" << (*it).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素!" << endl;
//	}
//}
//
//
////map容器统计
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	int count = m.count(3);
//	cout << count << endl;
//	//对于map容器,count要么为1要么为0
//	//multimap的count统计就可能>1
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}