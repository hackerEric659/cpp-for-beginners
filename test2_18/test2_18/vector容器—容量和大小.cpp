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
//	if (v1.empty())//Ϊ��,��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//	}
//	cout << "v1������Ϊ" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ" << v1.size() << endl;//������Զ���ڵ��ڴ�С
//
//	//����ָ����С
//	v1.resize(15);
//	cout << "v1������Ϊ" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//	printVector(v1);//���λ���Զ���0���
//	
//}
//int main()
//{
//	test01();
//	
//	return 0;
//}