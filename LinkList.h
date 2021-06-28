#pragma once
#include "Node.h"

class LinkList
{
	Node* head;
public:
	LinkList();
	~LinkList();
	void Display();
	void append(int value);
	void append_beginning(int value);
	void merge(LinkList*);
	Node* getHead();
	void addBefore(int value, int data);
	void addAfter(int value, int data);
	void deleteBeginning();
	void deleteEnd();
	void deleteAny(int value);
};

