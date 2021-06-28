#include "LinkList.h"
#include<iostream>

LinkList::LinkList()
{
	this->head = new Node();

}
LinkList::~LinkList()
{
}

void LinkList::append(int value)
{
	Node* newnode = new Node(value);
	Node* currptr = this->head;
	while (currptr->getNext() != NULL)
		currptr = currptr->getNext();
	currptr->setNext(newnode);
}

void LinkList::append_beginning(int value)
{
	Node *begin = new Node(value);
	begin->setNext(head);
	head = begin;
}

void LinkList::deleteEnd()
{
	Node* prevptr = head;
	Node* currptr = head->getNext();
	while (currptr->getNext() != NULL) {
		currptr = currptr->getNext();
		prevptr = prevptr->getNext();
	}
	prevptr->setNext(NULL);
	delete currptr;
	currptr = NULL;
}

void LinkList::deleteAny(int value)
{
	Node *ptr = head;
	Node *ptr2 = head->getNext();
	while (ptr2->getData() != value)
	{
		ptr2 = ptr2->getNext();
		ptr = ptr->getNext();
	}
	ptr->setNext(ptr2->getNext());
	free(ptr2);
}

void LinkList::Display()
{
	Node *local = this->head;
	while (local != NULL)
	{
		printf(" %d ", local->getData());
		local = local->getNext();
	}
}

void LinkList::merge(LinkList* L2)
{
	Node* local1 = this->head;
	Node* local2 = L2->getHead();
	while (local1->getNext() != NULL)
	{
		local1 = local1->getNext();
	}
	local1->setNext(local2);
}

Node* LinkList::getHead()
{
	return this->head;
}

void LinkList::addBefore(int value, int data)
{
	Node *newnode = new Node(data);
	Node *local = this->head;
	Node *local2 = head->getNext();
	while (local2->getData() != value)
	{
		local2 = local2->getNext();
		local = local->getNext();
	}
	local->setNext(newnode);
	newnode->setNext(local2);
}

void LinkList::addAfter(int value, int data)
{
	Node *newnode = new Node(data);
	Node *local = this->head;
	Node *local2 = head->getNext();
	while (local->getData() != value)
	{
		local = local->getNext();
		local2 = local2->getNext();
	}
	local->setNext(newnode);
	newnode->setNext(local2);
}

void LinkList::deleteBeginning()
{
	Node *beg = new Node();
	beg = head;
	head = head->getNext();
	delete(beg);
}

