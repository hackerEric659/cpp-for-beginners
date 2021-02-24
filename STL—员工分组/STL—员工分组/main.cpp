#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<time.h>
using namespace std;
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
//1.����ʮ��Ա��,�ŵ�vector��
//2.����vector����,ȡ��ÿ��Ա��,�����������
//3.�����,��Ա�����ű����Ϊkey,����Ա����Ϊvalue,���뵽multimap��
//4.�ֲ�����ʾԱ����Ϣ

class Worker
{
public:
	Worker():m_Name("δ��ʼ��"), m_Salary(0){}
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name="Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3; //0 - 2

			//��Ա�����뵽������
		//key�����ű��,value��Ա��
			m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "�߻�������Ϣ:" << endl;
	multimap<int,Worker>::iterator pos=m.find(CEHUA);

	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "����:" << pos->second.m_Name << "\t" << "����:" << pos->second.m_Salary << endl;
	}
	cout << "____________________________________________________________" << endl;
	cout << "����������Ϣ:" << endl;
	 pos = m.find(MEISHU);

	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:" << pos->second.m_Name << "\t" << "����:" << pos->second.m_Salary << endl;
	}

	cout << "____________________________________________________________" << endl;
	cout << "�з�������Ϣ:" << endl;
	pos = m.find(YANFA);

	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:" << pos->second.m_Name << "\t" << "����:" << pos->second.m_Salary << endl;
	}
}
int main()
{
	srand(unsigned int(time(NULL)));
	vector<Worker>vWorker;
	createWorker(vWorker);
	
	//�������
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);


	//������ʾԱ��
	showWorkerByGroup(mWorker);
	return 0;
}