#pragma once
class Node
{
	int data;
	Node* next;
public:
	Node();
	Node(int);
	int getData();
	Node* getNext();
	void setData(int);
	void setNext(Node *);
	~Node();
};

