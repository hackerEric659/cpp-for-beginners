//#include<iostream>
//using namespace std;
////重载函数调用运算符的类,其对象称为函数对象
////函数对象使用重载的()时,行为类似于函数调用,也叫仿函数
////函数对象(仿函数)本质是一个类
//
//
////1.函数对象在使用时,可以像普通函数那样调用,可以有参数,也可以有返回值
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myAdd;
//	//myAdd.operator()(10,10);
//	cout << myAdd(10, 10) << endl;
//}
//
////2.函数对象超出普通函数的概念,函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint() :count(0) { this->count++; }
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//	int count;
//};
//
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello,world");
//	cout << "myprint调用的次数为:" << myPrint.count << endl;
//}
//
//void doPrint(MyPrint& m,string test)
//{
//	m(test);
//}
//
////3.函数对象可以作为参数传递
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, string("hello,c++"));
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}