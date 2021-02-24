#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<time.h>
using namespace std;
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
//1.创建十名员工,放到vector中
//2.遍历vector容器,取出每个员工,进行随机分组
//3.分组后,将员工部门编号作为key,具体员工作为value,放入到multimap中
//4.分部门显示员工信息

class Worker
{
public:
	Worker():m_Name("未初始化"), m_Salary(0){}
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name="员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);
	}
}

//员工分组
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; //0 - 2

			//将员工插入到分组中
		//key代表部门编号,value是员工
			m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门信息:" << endl;
	multimap<int,Worker>::iterator pos=m.find(CEHUA);

	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t" << "工资:" << pos->second.m_Salary << endl;
	}
	cout << "____________________________________________________________" << endl;
	cout << "美术部门信息:" << endl;
	 pos = m.find(MEISHU);

	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t" << "工资:" << pos->second.m_Salary << endl;
	}

	cout << "____________________________________________________________" << endl;
	cout << "研发部门信息:" << endl;
	pos = m.find(YANFA);

	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t" << "工资:" << pos->second.m_Salary << endl;
	}
}
int main()
{
	srand(unsigned int(time(NULL)));
	vector<Worker>vWorker;
	createWorker(vWorker);
	
	//分组操作
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);


	//分组显示员工
	showWorkerByGroup(mWorker);
	return 0;
}