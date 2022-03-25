#pragma once
#include <iostream>
#include "Queue.h"
#include "Queue1private.h"
#include "Queue1protected.h"
#include "Queue1public.h"
#include "locale.h"
#include <new>

using namespace std;

int a;
void mm()
{
	cout << "1 Добавить элемент\n";
	cout << "2 Извлечь элемент\n";
	cout << "3 Вывод очереди\n";
	cout << "4 Подсчет размаха для элементов с нечетным порядковым номером\n";
	cout << "5 Создание копии\n";
	cout << "6 Слияние очередей\n";
	cout << "7 Выход\n";
	cout << "Ваше действие --> ";
	cin >> a;
};
