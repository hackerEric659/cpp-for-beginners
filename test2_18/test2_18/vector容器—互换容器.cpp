//#include<iostream>
//#include<vector>
//using namespace std;
////实现两个容器内的元素进行交换
//void printVector(vector<int>& vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	cout << "交换前" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的大小为:" << v.size() << endl;
//
//	v.resize(3);//重新指定大小,容量不变,大小变
//	vector<int>(v).swap(v);
//	//vector<int>(v)匿名对象,调用拷贝构造函数
//	//匿名对象当系统发现前行代码执行完毕,立马将匿名对象回收
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的大小为:" << v.size() << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
