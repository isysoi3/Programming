// ���������.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include <iostream>

using namespace std;

int main() {
	setlocale ( LC_ALL, "RUS" );

	double a, b , c;
	cout << "������ ��������� a ";
	cin >> a;
	cout << "������ ��������� b ";
	cin >> b;
	cout << "������ ��������� c ";
	cin >>c;
	
	if (( a == 0) && (c != 0) && (b != 0) )
		cout << "������ = " << -c / b << endl;
	else {
		if ((a == 0) && (b == 0) && (c == 0))
			cout << "x ����������� �������������� ������" << endl;
		else {
			if (c == 0)
					cout << "��� �����. ������ = 0. ������ = " << -b / a <<endl;
			else {
				if ( b == 0) {
					if ( c > 0)
						cout << "������	���" << endl;
					else
						cout << "��� �����. ������ = "<< sqrt(-c / a) << " ������ = " << -sqrt(-c / a) << endl;
				}
				else {
					double d = b * b - 4 * a * c;
					if (d >= 0 ) {
						if (d == 0)
							cout << "���� ������ ��������� = " << -b/(2*a) <<endl;
						else
							cout << "��� ����� ���������. ������ = " << (-b + sqrt(d) ) / ( 2 * a ) << " ������ ������ = " << (-b - sqrt(d) ) / ( 2 * a ) <<endl;
						}
					else 
						cout << "������	���" << endl;
				}
			}
		}
	}
	return 0;
}