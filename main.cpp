#include "all_headers.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int b, c, d, d1, d2, extr;
	int n;
	cout << "� ����� ����������� �������� �� ������ ��������?\n";
	cin >> n;
	Queue1public* queue_public = new Queue1public[n];
	Queue1private* queue_private = new Queue1private[n];
	Queue1protected* queue_protected = new Queue1protected[n];
	while (a != 7) {
		system("cls");
		cout << "� ��� ���� " << n << " �������/(��)" << endl;
		mm();
		switch (a)
		{
		case 1:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
			cin >> d;
			if (b == 1) {
				cout << "������� �������: ";
				cin >> c;
				queue_private[d - 1].retpush(c);
				cout << "������� ���������!\n";
				system("pause");
			} else if (b == 2) {
				cout << "������� �������: ";
				cin >> c;
				queue_protected[d - 1].retpush(c);
				cout << "������� ���������!\n";
				system("pause");
			} else if (b == 3) {
				cout << "������� �������: ";
				cin >> c;
				queue_public[d - 1].push(c);
				cout << "������� ���������!\n";
				system("pause");
			} else {
				cout << "������ ���� �� ����������!" << endl;
				system("pause");
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
			cin >> d;
			if (b == 1) {
				extr = queue_private[d - 1].retpop();
				cout << extr << " - �� ��������\n";
				system("pause");
			} else if (b == 2) {
				extr = queue_protected[d - 1].retpop();
				cout << extr << " - �� ��������\n";
				system("pause");
			} else if (b == 3) {
				extr = queue_public[d - 1].pop();
				cout << extr << " - �� ��������\n";
				system("pause");
			} else {
				cout << "������ ���� �� ����������!" << endl;
				system("pause");
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
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
				cout << "������ ���� �� ����������!" << endl;
				system("pause");
			}
			break;
		}
		case 4:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
			cin >> d;
			if (b == 1) {
				extr = queue_private[d - 1].task16();
				cout << "������ ����� - " << extr << endl;
				system("pause");
			} else if (b == 2) {
				extr = queue_protected[d - 1].task16();
				cout << "������ ����� - " << extr << endl;
				system("pause");
			} else if (b == 3) {
				extr = queue_public[d - 1].task16();
				cout << "������ ����� - " << extr << endl;
				system("pause");
			} else {
				cout << "������ ���� �� ����������!" << endl;
				system("pause");
			}
			break;
		}
		case 5:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
			cin >> d;
			cout << "�������� ������ ������� �� " << n << "\n";
			cin >> d1;
			if (d == d1) {
				cout << "���������� ��� ���!";
				system("pause");
                     break;
			}
			if (b == 1) {
				queue_private[d1 - 1].retclone(queue_private[d - 1]);
				cout << "����������� ������ �������!\n";
				system("pause");
			} else if (b == 2) {
				queue_protected[d1 - 1].retclone(queue_protected[d - 1]);
				cout << "����������� ������ �������!\n";
				system("pause");
			} else if (b == 3) {
				queue_public[d1 - 1].copy(queue_public[d - 1]);
				cout << "����������� ������ �������!\n";
				system("pause");
			} else {
				cout << "������ ���� �� ����������!" << endl;
				system("pause");
			}
			break;
		}
		case 6:
		{
			system("cls");
			cout << "� ����� ����� ������������ ������� �� ������ ��������?" << endl;
			cout << "1 private\n";
			cout << "2 protected\n";
			cout << "3 public\n";
			cin >> b;
			cout << "�������� ������� �� " << n << "\n";
			cin >> d;
			cout << "�������� ������ ������� �� " << n << "\n";
			cin >> d1;
			cout << "�������� ������� �� " << n << ", � ������� ������ ����� �������\n";
			cin >> d2;
			if (b == 1) {
				queue_private[d2 - 1].retmerge(queue_private[d - 1], queue_private[d1 - 1]);
				cout << "������� ��������� �������!\n";
				system("pause");
			} else if (b == 2) {
				queue_protected[d2 - 1].retmerge(queue_protected[d - 1], queue_protected[d1 - 1]);
				cout << "������� ��������� �������!\n";
				system("pause");
			} else if (b == 3) {
				queue_public[d2 - 1].merge(queue_public[d - 1], queue_public[d1 - 1]);
				cout << "������� ��������� �������!\n";
				system("pause");
			} else {
				cout << "������ ���� �� ����������!\n" << endl;
				system("pause");
			}
			break;
		}
		case 7:
		{
			system("cls");
			cout << "�� ����� �� ���������!\n" << endl;
			system("pause");
			break;
		}
		default:
		{
			cout << "������ ������ ���!" << endl;
			system("pause");
			break;
}
}
}
}
