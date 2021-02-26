//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//bool greaterThanThirty(int val)
//{
//	return val > 30;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	replace_if(v.begin(), v.end(), greaterThanThirty, 3000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}