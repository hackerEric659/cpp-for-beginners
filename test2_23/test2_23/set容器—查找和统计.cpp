//#include<iostream>
//#include<set>
//using namespace std;
//
////find(key)	����key�Ƿ����,���ظ�Ԫ�ص�����,��������,����set.end()
////count(key)	ͳ��keyԪ�صĸ���
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//
//	set<int>::iterator it=s1.find(30);
//	if (it != s1.end())
//	{
//		cout << "�ҵ�Ԫ��" << *it<<endl;
//	}
//	else
//		cout << "δ�ҵ�Ԫ��" << endl;
//}
//
//void test02()
//{
//	//ͳ��
//	//����set����,count����ֵҪô��0Ҫô��1
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	int num = s1.count(30);
//	cout << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}