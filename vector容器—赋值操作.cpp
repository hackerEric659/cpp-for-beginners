//#include<iostream>
//#include<vector>
//using namespace std;
//
//
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
//	//��ֵoperator=
//	vector<int>v2 = v1;
//	printVector(v2);
//
//	//��ֵassign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());//ǰ�պ�����
//	printVector(v3);
//
//	//��ֵ assign n��elem�ķ�ʽ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}