#include<iostream>
#include<vector>
using namespace std;
//����vector�ڶ�̬��չ����ʱ����չ����
//reserve(int len)	����Ԥ��len��Ԫ�س���,Ԥ��λ�ò���ʼ��,Ԫ�ز��ɷ���
void test01()
{
	vector<int>v1;
	//ͳ�ƿ��ٿռ�Ĵ���
	int* intPtr = NULL;
	int count = 0;
	v1.reserve(100000);//Ԥ��100000���ݵĿռ�
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (intPtr != &(v1.at(0)))//ÿ�ο��ٵĿռ䲢������,������Ԫ�ص�ַ��ÿ�ο��ٿռ�ʱ����ı�
		{
			intPtr=&(v1[0]);
				count++;
		}
	}
	cout << "���ٵĴ���Ϊ:" << count << endl;
}
int main()
{
	test01();

	return 0;
}