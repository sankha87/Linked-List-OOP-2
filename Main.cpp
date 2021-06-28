#include"LinkList.h"
#include"Node.h"
#include<conio.h>
#include<iostream>
using namespace std;
void main()
{
	LinkList *L1 = new LinkList();
	LinkList *L2 = new LinkList();
	LinkList L3;
	L3.append(4444);
	for (int i = 3; i < 30; i += 4)
		L1->append(i);
	for (int i = 2; i < 20; i += 2)
		L2->append(i);
	L1->Display();
	cout << endl;
	L2->Display();
	cout << endl;
	//L1->merge(L2);
	//L1->Display();
	//cout << endl;
	//L2->Display();
	//cout << endl;
	//L2->deleteEnd();
	//L2->deleteEnd();
	//L2->Display();
	L1->addBefore(19,555);
	L1->Display();
	cout << endl;
	L2->addAfter(10,222);
	L2->Display();
	cout << endl;
	L1->deleteBeginning();
	L1->deleteBeginning();
	L1->Display();
	cout << endl;
	L1->deleteAny(15);
	L1->Display();
	cout << endl;
	L1->append_beginning(444);
	L1->append_beginning(333);
	L1->Display();
	_getch();
}