//#include<iostream>
//#include<vector>
//using namespace std;
////ʵ�����������ڵ�Ԫ�ؽ��н���
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
//	cout << "����ǰ" << endl;
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
//	cout << "������" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//
//	v.resize(3);//����ָ����С,��������,��С��
//	vector<int>(v).swap(v);
//	//vector<int>(v)��������,���ÿ������캯��
//	//��������ϵͳ����ǰ�д���ִ�����,���������������
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
