#include "Queue1protected.h"
#define MAX_INT 2147483647
#define MIN_INT -2147483648

int Queue1protected::task16() {
	int size = this->Get_size();
	int min = MAX_INT, max = MIN_INT, diff = 0;
	int* arr = new int[size];
	int i = 0;
	while (i < size) {
		arr[i] = this->pop();
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
int Queue1protected::retpop() {
	return this->pop();
}
void Queue1protected::retpush(int a) {
	return this->push(a);
}
void Queue1protected::retshow() {
	return this->show();
}
void Queue1protected::retclone(Queue1protected& q) {
	return this->copy((Queue1protected&)q);
}
void Queue1protected::retmerge(Queue1protected& q1, Queue1protected& q2) {
	return this->merge((Queue1protected&) q1, (Queue1protected&) q2);
}
int Queue1protected::retsize() {
	return this->Get_size();
}
Elem* Queue1protected::rett() {
	return this->Get_t();
}
int Queue1protected::retemp() {
	return this->emp();
}
