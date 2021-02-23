//#include<iostream>
//#include<set>
//using namespace std;
//
////find(key)	查找key是否存在,返回该元素迭代器,若不存在,返回set.end()
////count(key)	统计key元素的个数
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//
//	set<int>::iterator it=s1.find(30);
//	if (it != s1.end())
//	{
//		cout << "找到元素" << *it<<endl;
//	}
//	else
//		cout << "未找到元素" << endl;
//}
//
//void test02()
//{
//	//统计
//	//对于set而言,count返回值要么是0要么是1
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	int num = s1.count(30);
//	cout << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}