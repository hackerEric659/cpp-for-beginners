#include<iostream>
#include<vector>
using namespace std;
//减少vector在动态扩展容量时的扩展次数
//reserve(int len)	容器预留len个元素长度,预留位置不初始化,元素不可访问
void test01()
{
	vector<int>v1;
	//统计开辟空间的次数
	int* intPtr = NULL;
	int count = 0;
	v1.reserve(100000);//预留100000数据的空间
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (intPtr != &(v1.at(0)))//每次开辟的空间并不连续,所以首元素地址在每次开辟空间时都会改变
		{
			intPtr=&(v1[0]);
				count++;
		}
	}
	cout << "开辟的次数为:" << count << endl;
}
int main()
{
	test01();

	return 0;
}