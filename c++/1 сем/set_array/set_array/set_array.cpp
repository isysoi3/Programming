// set_array.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <set>

using namespace std;

void input_output(int n, int array[]) {
	for (int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << " ������� ������� ";
		cin >> array[i];
	}
}
int main() {
	setlocale(LC_ALL, "RUS");
	cout << "������� ����������� ������� ";
	int n;
	cin >> n;
	set<int> Myset;
	int *array = new int[n];
	input_output(n, array);
	for (int i = 0; i < n; i++) {
		Myset.insert(array[i]);
	}
	cout << "����� ��������� ��������� : " << Myset.size() << endl;
	delete[] array;
	return 0;
}



//������� ��������� ��������� � ���