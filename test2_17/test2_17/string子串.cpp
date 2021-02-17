#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 5);
	cout << subStr << endl;
}

//实用操作
void test02()
{
	string email = "eric@sina.com";
	//从邮件地址中获取用户名的信息
	int pos = email.find("@");
	string name = email.substr(0, pos);
	cout << name << endl;
}
int main()
{
	test02();

	return 0;
}