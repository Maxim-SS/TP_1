#include "Queue1public.h"
#define MAX_INT 2147483647
#define MIN_INT -2147483648
int Queue1public::task16() {
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
