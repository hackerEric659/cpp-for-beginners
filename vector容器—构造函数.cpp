//#include<iostream>
//#include<vector>
//using namespace std;
////vector����Ϊ��������,����������β���������ɾ���Ĳ���
////�����Ǿ�̬�ռ�,vector���Զ�̬��չ
////��̬��չ������ԭ�ռ�֮�������¿ռ�,�����ҵ�������ڴ�ռ�,Ȼ��ԭ���ݿ������¿ռ�,�ͷ�ԭ�ռ�
////vector<T>v			ģ����
////vector(v.begin(),v.end())		ǰ�պ�����Ԫ�ؿ���������
////vector(n,elem)				��n��elem����������
////vector(const vector&vec)		�������캯��
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
//	vector<int>v1;//Ĭ�Ϲ���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elemԪ�صĹ���
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