#include "all_headers.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int b, c, d, d1, d2, extr;
	int n;
	cout << "С каким количеством очередей вы хотите работать?\n";
	cin >> n;
	Queue1public* queue_public = new Queue1public[n];
	Queue1private* queue_private = new Queue1private[n];
	Queue1protected* queue_protected = new Queue1protected[n];
	while (a != 7) {
		system("cls");
		cout << "У вас есть " << n << " очереди/(ей)" << endl;
		mm();
		switch (a)
		{
		case 1:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			if (b == 1) {
				cout << "Введите элемент: ";
				cin >> c;
				queue_private[d - 1].retpush(c);
				cout << "Успешно добавлено!\n";
				system("pause");
			} else if (b == 2) {
				cout << "Введите элемент: ";
				cin >> c;
				queue_protected[d - 1].retpush(c);
				cout << "Успешно добавлено!\n";
				system("pause");
			} else if (b == 3) {
				cout << "Введите элемент: ";
				cin >> c;
				queue_public[d - 1].push(c);
				cout << "Успешно добавлено!\n";
				system("pause");
			} else {
				cout << "Такого типа не существует!" << endl;
				system("pause");
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			if (b == 1) {
				extr = queue_private[d - 1].retpop();
				cout << extr << " - вы извлекли\n";
				system("pause");
			} else if (b == 2) {
				extr = queue_protected[d - 1].retpop();
				cout << extr << " - вы извлекли\n";
				system("pause");
			} else if (b == 3) {
				extr = queue_public[d - 1].pop();
				cout << extr << " - вы извлекли\n";
				system("pause");
			} else {
				cout << "Такого типа не существует!" << endl;
				system("pause");
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			if (b == 1) {
				queue_private[d - 1].retshow();
				system("pause");
			} else if (b == 2) {
				queue_protected[d - 1].retshow();
				system("pause");
			} else if (b == 3) {
				queue_public[d - 1].show();
				system("pause");
			} else {
				cout << "Такого типа не существует!" << endl;
				system("pause");
			}
			break;
		}
		case 4:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			if (b == 1) {
				extr = queue_private[d - 1].task16();
				cout << "Размах равен - " << extr << endl;
				system("pause");
			} else if (b == 2) {
				extr = queue_protected[d - 1].task16();
				cout << "Размах равен - " << extr << endl;
				system("pause");
			} else if (b == 3) {
				extr = queue_public[d - 1].task16();
				cout << "Размах равен - " << extr << endl;
				system("pause");
			} else {
				cout << "Такого типа не существует!" << endl;
				system("pause");
			}
			break;
		}
		case 5:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			cout << "Выберите вторую очередь из " << n << "\n";
			cin >> d1;
			if (d == d1) {
				cout << "Попробуйте еще раз!";
				system("pause");
                     break;
			}
			if (b == 1) {
				queue_private[d1 - 1].retclone(queue_private[d - 1]);
				cout << "Копирование прошло успешно!\n";
				system("pause");
			} else if (b == 2) {
				queue_protected[d1 - 1].retclone(queue_protected[d - 1]);
				cout << "Копирование прошло успешно!\n";
				system("pause");
			} else if (b == 3) {
				queue_public[d1 - 1].copy(queue_public[d - 1]);
				cout << "Копирование прошло успешно!\n";
				system("pause");
			} else {
				cout << "Такого типа не существует!" << endl;
				system("pause");
			}
			break;
		}
		case 6:
		{
			system("cls");
			cout << "С каким типом наследования очереди вы хотите работать?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "Выберите очередь из " << n << "\n";
			cin >> d;
			cout << "Выберите вторую очередь из " << n << "\n";
			cin >> d1;
			cout << "Выберите очередь из " << n << ", в которую хотите слить очереди\n";
			cin >> d2;
			if (b == 1) {
				queue_private[d2 - 1].retmerge(queue_private[d - 1], queue_private[d1 - 1]);
				cout << "Слияние выполнено успешно!\n";
				system("pause");
			} else if (b == 2) {
				queue_protected[d2 - 1].retmerge(queue_protected[d - 1], queue_protected[d1 - 1]);
				cout << "Слияние выполнено успешно!\n";
				system("pause");
			} else if (b == 3) {
				queue_public[d2 - 1].merge(queue_public[d - 1], queue_public[d1 - 1]);
				cout << "Слияние выполнено успешно!\n";
				system("pause");
			} else {
				cout << "Такого типа не существует!\n" << endl;
				system("pause");
			}
			break;
		}
		case 7:
		{
			system("cls");
			cout << "Вы вышли из программы!\n" << endl;
			system("pause");
			break;
		}
		default:
		{
			cout << "Такого номера нет!" << endl;
			system("pause");
			break;
}
}
}
}
