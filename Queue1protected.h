#pragma once
#include "Queue.h"

class Queue1protected : protected Queue
{
public:
	int task16();
	int retpop();
	void retpush(int a);
	void retshow();
	void retclone(Queue1protected& q);
	void retmerge(Queue1protected& q1,  Queue1protected& q2);
	int retsize();
	Elem* rett();
	int retemp();
};
