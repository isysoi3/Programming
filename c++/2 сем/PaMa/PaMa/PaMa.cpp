// PaMa.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <string>
#include <mutex>
#include <thread>
#include <vector>
#include "SayClass.h"
using namespace std;

void GetInfo(string& str, int& r, int& deleay)
{
	cout << "������� �����: ";
	cin >> str;
	cout << "������� ��������� ���������� ����� �����: ";
	cin >> r;
	cout << "������� ��������: ";
	cin >> deleay;
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "rus");
	int N, tmp;
	cout << "������� ���������� ����: ";
	cin >> N;
	cout << "������ ����� ���������� ����������: ";
	cin >> tmp;
	cout << endl;
	SayClass::TotalRepeats = tmp;
	vector <SayClass> vec;
	string str;
	int r = 0, delay = 0;

	for (int i = 0; i < N; i++) {
		GetInfo(str, r, delay);
		auto sc = SayClass(str, r, delay);
		vec.push_back(sc);
	}

	thread *thr = new thread[vec.size()];

	for (int i = 0; i < vec.size(); i++)
	{
		thr[i] = thread(&SayClass::Say, vec[i]);
	}

	for (int i = 0; i < vec.size(); i++)
	{
		if (thr[i].joinable())
			thr[i].join();
	}

	delete[] thr;
	return 0;
}

