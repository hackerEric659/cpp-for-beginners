//#include<iostream>
//#include<vector>
//using namespace std;
//void printVector(vector<int>& vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//为真,代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//	}
//	cout << "v1的容量为" << v1.capacity() << endl;
//	cout << "v1的大小为" << v1.size() << endl;//容量永远大于等于大小
//
//	//重新指定大小
//	v1.resize(15);
//	cout << "v1的容量为" << v1.capacity() << endl;
//	cout << "v1的大小为" << v1.size() << endl;
//	printVector(v1);//多的位置自动用0填充
//	
//}
//int main()
//{
//	test01();
//	
//	return 0;
//}