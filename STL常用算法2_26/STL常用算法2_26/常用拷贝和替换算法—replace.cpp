//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "�滻��" << endl;
//
//	//��20�滻Ϊ2000
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}