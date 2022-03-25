#pragma once
#include <iostream>
#include "Queue.h"

Queue::Queue() { size = 0; t = NULL; }
Queue::~Queue() {
	while (size) {
		Elem* a = t;
		t = a->previous;
		size--;
		delete[] a;
	}
	t = NULL;
}
void Queue::push(int a) {
	Elem* elem = new (Elem);
	elem->previous = this->t;
	elem->member = a;
	this->t = elem;
	size++;
}
int Queue::pop() {
	Elem *elem = this->t;
	int a;
	if (!this->emp())
		return 0;
	if (this->size == 1)
	{
		a = (elem->member);
		elem->member = NULL;
		t = NULL;
		size--;
		return a;
	}
	while (elem->previous->previous != NULL)
		elem = elem->previous;
	Elem *b = elem->previous;
	a = b->member;
	elem->previous = NULL;
	delete b;
	size--;
	return a;
}
void Queue::show() {
	if (!size) {
		std::cout << "Очередь пустая.\n";
		return;
	}
	Elem *a = t;
	std::cout << std::endl;
	std::cout << "\\/Конец очереди\\/\n";
	while (a->previous != NULL) {
		std::cout << a->member << std::endl;
		a = a->previous;
	}
	std::cout << a->member << std::endl;
	std::cout << "/\\Начало очереди/\\ \n";
}
void Queue::copy(Queue& q) {
	int s = q.Get_size();
	int* arr = new int[s];
	int i = 0;
	while (i < s) {
		arr[i] = q.pop();
		i++;
	}
	this->clr();
	this->t = NULL;
	q.t = NULL;
	i = 0;
	while (i < s) {
		q.push(arr[i]);
		this->push(arr[i]);
		i++;
	}
	delete[] arr;
}
void Queue::merge(Queue& q1, Queue& q2) {
	int s = q2.size;
	int* arr = new int[s];
	int i = 0;
	this->clr();
	this->t = NULL;
	this->copy(q1);
	while (i < s)
	{
		arr[i] = q2.pop();
		i++;
	}
	q2.t = NULL;
	i = 0;
	while(i < s)
	{
		q2.push(arr[i]);
		this->push(arr[i]);
		i++;
	}
	delete[] arr;
}
int Queue::Get_size() { return size; }
int Queue::emp() {
	if (size)
		return 1;
	else
		return 0;
}
Elem* Queue::Get_t() { return t; }
void Queue::clr() {
	while (this->emp())
		this->pop();
}
