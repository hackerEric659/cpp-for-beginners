#include<vector>
#include<deque>
#include<iostream>
#include<string>
#include<algorithm>
#include<time.h>
using namespace std;

//选手类
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
		string name = "选手";
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
		//将评委的分数放入deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		cout << "选手:" << it->m_Name << "打分:";
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
			sum += *dit;//累加每个评委的分数

		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手姓名:" << it->m_Name << "\t平均分:" << it->m_Score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//创建五名选手
	vector<Person>v;//存放选手的容器
	createPerson(v);
	/*
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << it->m_Name << "\t分数:" << it->m_Score << endl;
	}
	*/
	//给五名选手打分
	setScore(v);
	//显示最后的得分
	showScore(v);
	return 0;
}