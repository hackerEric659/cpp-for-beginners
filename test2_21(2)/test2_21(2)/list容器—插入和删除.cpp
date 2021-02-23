//#include<iostream>
//#include<list>
//using namespace std;
////list容器的插入和删除
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	l.push_front(100);
//	l.push_front(200);
//	l.push_front(300);
//	printList(l);
//	l.pop_back();
//	printList(l);
//	l.pop_front();
//	printList(l);
//
//
//	//insert插入
//	l.insert(l.begin(), 1000);
//	printList(l);
//	list<int>::iterator it = l.begin();
//	it = l.begin();
//	l.erase(it);
//	printList(l);
//
//	l.push_back(10000);
//	l.push_back(10000);
//	printList(l);
//	l.remove(10000);//删除容器中所有与elem值匹配的元素
//	printList(l);
//
//	l.clear();
//	printList(l);
//}
//int main()
//{
//	test01();
//
//	return 0;
//}