// 3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale ( LC_ALL, "RUS" );
	cout << "������� 2 ����� (������ ������ ���� ������ �������) " << endl;
	
	int a, b, d, r;
	
	cin >> a >> b;
	cout << "������� �����: ";
	
	for ( a ; a <= b ; a++ ){
		d = 2;
		do
		{
			r = a % d;
			if (r != 0)
				d++;
		} while (r != 0);
		if (a == d)
			cout << a << " ";
	}
	
	cout << endl;
	
	return 0;
}