//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
////ν��:����bool���͵ķº���
////���operator()����һ������,��ΪһԪν��
////������������,��Ԫν��
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����������Ƿ��д���5������
//	vector<int>::iterator it=find_if(v.begin(), v.end(),GreaterFive() );//GreaterFive()��������������
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5������,Ϊ:" << *it << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}