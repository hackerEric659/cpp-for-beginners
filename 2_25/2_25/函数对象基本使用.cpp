//#include<iostream>
//using namespace std;
////���غ����������������,������Ϊ��������
////��������ʹ�����ص�()ʱ,��Ϊ�����ں�������,Ҳ�зº���
////��������(�º���)������һ����
//
//
////1.����������ʹ��ʱ,��������ͨ������������,�����в���,Ҳ�����з���ֵ
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
////2.�������󳬳���ͨ�����ĸ���,��������������Լ���״̬
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
//	cout << "myprint���õĴ���Ϊ:" << myPrint.count << endl;
//}
//
//void doPrint(MyPrint& m,string test)
//{
//	m(test);
//}
//
////3.�������������Ϊ��������
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