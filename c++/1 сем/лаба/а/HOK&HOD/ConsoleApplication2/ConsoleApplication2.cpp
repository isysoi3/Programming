// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>

using namespace std;

int main(){
	setlocale (LC_ALL, "Russian");
	cout << "������� 2 �����" << endl;
	int a, b;
	cin >> a >> b;
	
	int a1 = a;
	int b1 = b;
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else 
			b = b - a;
	}
	
	cout << "���(" << a1 << "," << b1 << ")=" << a << endl;
	cout << "���(" << a1 << "," << b1 << ")=" << a1 * (b1 / a) << endl;
	
	
	return 0;

}
