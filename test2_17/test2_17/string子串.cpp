#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 5);
	cout << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "eric@sina.com";
	//���ʼ���ַ�л�ȡ�û�������Ϣ
	int pos = email.find("@");
	string name = email.substr(0, pos);
	cout << name << endl;
}
int main()
{
	test02();

	return 0;
}