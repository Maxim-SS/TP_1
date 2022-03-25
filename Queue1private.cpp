#include "Queue1private.h"
#define MAX_INT 2147483647
#define MIN_INT -2147483648
int Queue1private::task16() {
	int size = this->Get_size();
	int min = MAX_INT, max = MIN_INT, diff = 0;
	int* arr = new int[size];
	int i = 0;
	while (i < size) {
		arr[i] = this->retpop();
		if (i % 2 == 0) {
			if (arr[i] > max)
				max = arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
		i++;
	}
	diff = max - min;
	i = 0;
	while (i < size) {
		this->push(arr[i]);
		i++;
	}

	delete[] arr;
	return diff;
}
int Queue1private::retpop() {
	return this->pop();
}
void Queue1private::retpush(int a) {
	return this->push(a);
}
void Queue1private::retshow() {
	return this->show();
}
void Queue1private::retclone(Queue1private& q) {
	return this->copy((Queue1private&)q);
}
void Queue1private::retmerge(Queue1private& q1, Queue1private& q2) {
	return this->merge((Queue1private&)q1, (Queue1private&)q2);
}
int Queue1private::retsize() {
	return this->Get_size();
}
Elem* Queue1private::rett() {
	return this->Get_t();
}
int Queue1private::retemp() {
	return this->emp();
}
