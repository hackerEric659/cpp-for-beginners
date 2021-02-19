#include<vector>
#include<deque>
#include<iostream>
#include<string>
#include<algorithm>
#include<time.h>
using namespace std;

//ѡ����
class Person
{
public:
	Person(string name,int score):m_Name(name),m_Score(score){}
	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		cout << "ѡ��:" << it->m_Name << "���:";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";

		}
		cout << endl;


		sort(d.begin(), d.end());
		d.pop_front();
		d.pop_back();

		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿ����ί�ķ���

		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ������:" << it->m_Name << "\tƽ����:" << it->m_Score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//��������ѡ��
	vector<Person>v;//���ѡ�ֵ�����
	createPerson(v);
	/*
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����: " << it->m_Name << "\t����:" << it->m_Score << endl;
	}
	*/
	//������ѡ�ִ��
	setScore(v);
	//��ʾ���ĵ÷�
	showScore(v);
	return 0;
}