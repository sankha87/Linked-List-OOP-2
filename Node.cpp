#include "Node.h"
#include<iostream>
Node::Node()
{
	this->data = 0;
	this->next = NULL;
}
Node::Node(int d)
{
	this->data = d;
	this->next = NULL;
}

Node::~Node()
{
	delete this->next;
	this->next = NULL;
}
int Node::getData()
{
	return this->data;
}
Node* Node::getNext()
{
	return this->next;
}
void Node::setData(int d)
{
	this->data = d;
}
void Node::setNext(Node *n)
{
	this->next = n;
}