// drinks.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <conio.h>
#include "Drink.h"
#include "Soft_Drink.h"
#include "Tipple.h"

using namespace std;

char option() {
	char ch;
	cout << "[1] Beer\n";
	cout << "[2] Cognac\n";
	cout << "[3] Wine\n";
	cout << "[4] Lemonade\n";
	cout << "[5] Milk\n";
	cout << "[6] MineralWater\n";
	cout << "[0] exit\n";
	while ((ch = _getch()) != '1' && ch != '2' && ch != '3'
		&& ch != '4' && ch != '5' && ch != '6' && ch != '0');
	system("cls");
	return ch;
}

int main() {
	setlocale(LC_ALL, "Russian");
	char numb;
	int enumChoice;
	double volume, abv;
	string drinkName;

	Milk *tmpMilk = nullptr;
	Lemonade *tmpLem = nullptr;
	Mineral_Water *tmpMW = nullptr;
	Beer *tmpBeer = nullptr;
	Cognac *tmpCognac = nullptr;
	Wine *tmpWine = nullptr;
//Drink dr;

	while (true) {

		numb = option();

		if (numb != '0') {
			cout << "������� �������� : ";
			getline(cin, drinkName);
			cout << "������� ����� : ";
			cin >> volume;
			if (numb == '1' || numb == '2' || numb == '3') {
				cout << "������� ������� �������� : ";
				cin >> abv;
			}
			switch (numb) {
			case '1': {
				cleaning bb;
				cout << "���(1.filtered, 2.unfiltered) : ";
				cin >> enumChoice;
				system("cls");
				if (enumChoice == 1)
					bb = filtered;
				else {
					if (enumChoice == 2)
						bb = unfiltered;
					else {
						cout << "������������ �����\n";
						break;
					}
				}
				try {
					tmpBeer = new Beer(drinkName, volume, abv, bb);
					cout << "Beer\n";
					cout << "�������� : " << tmpBeer->getName() << endl;
					cout << "����� : " << tmpBeer->getVolume() << " �" << endl;
					cout << "������� �������� : " << tmpBeer->getSturdiness() << " %" << endl;
					cout << "��� : " << tmpBeer->getFilt() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;
			}
			case '2': {
				int i;
				cout << "������� ������� : ";
				cin >> i;
				system("cls");
				try {
					tmpCognac = new Cognac(drinkName, volume, abv, i);
					cout << "Cognac\n";
					cout << "�������� : " << tmpCognac->getName() << endl;
					cout << "����� : " << tmpCognac->getVolume() << " �" << endl;
					cout << "������� �������� : " << tmpCognac->getSturdiness() << " %" << endl;
					cout << "�������� : " << tmpCognac->getExcert() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;
			}
			case '3': {
				Color typeW;
				cout << "������� ���(1.red, 2.white): ";
				cin >> enumChoice;
				system("cls");
				if (enumChoice == 1)
					typeW = red;
				else {
					if (enumChoice == 2)
						typeW = white;
					else {
						cout << "������������ �����\n";
						break;
					}
				}
				try {
					tmpWine = new Wine(drinkName, volume, abv, typeW);
					cout << "Wine\n";
					cout << "�������� : " << tmpWine->getName() << endl;
					cout << "����� : " << tmpWine->getVolume() << " �" << endl;
					cout << "������� �������� : " << tmpWine->getSturdiness() << " %" << endl;
					cout << "���� : " << tmpWine->getColor() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;

			}
			case '4': {
				Additive ad;
				cout << "������� �������(1.apple, 2.pear, 3.orange): ";
				cin >> enumChoice;
				system("cls");
				if (enumChoice == 1)
					ad = apple;
				else {
					if (enumChoice == 2)
						ad = pear;
					else
						if (enumChoice == 3)
							ad = orange;
						else {
							cout << "������������ �����\n";
							break;
						}
				}
				try {
					tmpLem = new Lemonade(drinkName, volume, ad);
					cout << "Lemonade\n";
					cout << "�������� : " << tmpLem->getName() << endl;
					cout << "����� : " << tmpLem->getVolume() << " �" << endl;
					cout << "������� : " << tmpLem->getAdd() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;
			}
			case '5': {
				int fat;
				cout << "������� ������� ����: ";
				cin >> fat;
				system("cls");
				try {
					tmpMilk = new Milk(drinkName, volume, fat);
					cout << "Milk\n";
					cout << "�������� : " << tmpMilk->getName() << endl;
					cout << "����� : " << tmpMilk->getVolume() << " �" << endl;
					cout << "�������� : " << tmpMilk->getFatness() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;
			}
			case '6': {
				TheNumberOfGas gs;
				cout << "������� ��������������(1.strong, 2.middling, 3.without): ";
				cin >> enumChoice;
				system("cls");
				if (enumChoice == 1)
					gs = strong;
				else {
					if (enumChoice == 2)
						gs = middling;
					else
						if (enumChoice == 3)
							gs = without;
						else {
							cout << "������������ �����\n";
							break;
						}
				}
				try {
					tmpMW = new Mineral_Water(drinkName, volume, gs);
					cout << "MineralWater\n";
					cout << "�������� : " << tmpMW->getName() << endl;
					cout << "����� : " << tmpMW->getVolume() << " �" << endl;
					cout << "�������������� : " << tmpMW->getGas() << endl << endl;
				}
				catch (const exception& e) {
					cout << e.what() << endl;
				}
				break;
			}
			}
			system("pause");
			system("cls");
			cin.ignore();
		}
		else
			break;
	}
	delete tmpMilk;
	delete tmpLem;
	delete tmpMW;
	delete tmpBeer;
	delete tmpCognac;
	delete tmpWine;
	return 0;
}
