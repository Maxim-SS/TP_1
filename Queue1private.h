#pragma once
#include "Queue.h"

class Queue1private : private Queue
{
public:
	int task16();
	int retpop();
	void retpush(int a);
	void retshow();
	void retclone(Queue1private& q);
	void retmerge(Queue1private& q1, Queue1private& q2);
	int retsize();
	Elem* rett();
	int retemp();
};
