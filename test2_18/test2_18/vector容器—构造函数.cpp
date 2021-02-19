//#include<iostream>
//#include<vector>
//using namespace std;
////vector被称为单端数组,可以在数组尾端做插入和删除的操作
////数组是静态空间,vector可以动态扩展
////动态扩展不是在原空间之后续接新空间,而是找到更大的内存空间,然后将原数据拷贝到新空间,释放原空间
////vector<T>v			模板类
////vector(v.begin(),v.end())		前闭后开区间元素拷贝给本身
////vector(n,elem)				将n个elem拷贝给本身
////vector(const vector&vec)		拷贝构造函数
//void printVector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;//默认构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem元素的构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}