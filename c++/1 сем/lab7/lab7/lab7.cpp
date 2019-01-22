// lab7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <Windows.h>
#include "Dictionary.h"
#include <conio.h>
#include <map>
#include <string>
using namespace std;

string en_input() {
	string str;
	cout << "������� ���������� ����� ";
	getline(cin, str);
	return str;
}

string rus_input() {
	string str;
	cout << "������� ������� ����� ";
	getline(cin, str);
	return str;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Dictionary my, mu1, rez;
	mu1.insertWord("hot", "�������");
	char  numb;
	string en, rus;
	while (true) {
		cout << "[1] ��� ���������� ����� � �������\n";
		cout << "[2] ��� ����� ����� �����\n";
		cout << "[3] ��� ����������� ��������\n";
		cout << "[4] ����� �������\n";
		cout << "[5] �������� ����� �� �������\n";
		cout << "[6] ��� ��������� ��������\n";
		cout << "[7] ������������ \n";
		cout << "[8] ������ �������\n";
		cout << "[9] �������� ��������\n";
		cout << "[0] exit\n";
		numb = _getch();
		system("cls");
		if (numb != '0') {
			switch (numb) {
			case '1': {
				en = en_input();
				rus = rus_input();
				my.insertWord(en, rus);
				break;
			}
			case '2': {
				cin >> my;
				break;
			}
			case '3': {
				my = my + mu1;
				break;
			}
			case '4': {
				cout << my;
				break;
			}
			case '5': {
				en = en_input();
				my.deleteWord(en);
				break;
			}
			case '6': {
				en = en_input();
				rus = rus_input();
				my.setWord(en, rus);
				break;
			}
			case '7': {
				my = mu1;
				break;
			}
			case '8': {
				cout << my.getSize() << endl;
				break;
			}
			case '9': {
				en = en_input();
				cout << my.getWord(en) << endl;
				break;
			}
			default: {
				break;
			}
			}
			system("pause");
			system("cls");
		}
		else
			break;
	}
	return 0;
}

