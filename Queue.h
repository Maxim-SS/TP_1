#pragma once
#include "Elem.h"

class Queue
{
private:
	Elem *t;
protected:
	int size;
public:
	Queue();
	~Queue();
	void push(int a);
	int pop();
	void copy(Queue& q);
	void merge(Queue& q1, Queue& q2);
	void show();
	int Get_size();
	Elem* Get_t();
	int emp();
	void clr();
};
