//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//
//void printVector( const vector<int>& v)
//{
//	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end(),MyCompare());
//	printVector(v);
//
//	//使用函数对象改变算法策略,变为从大到小
//}
//int main()
//{
//	test01();
//
//	return 0;
//}