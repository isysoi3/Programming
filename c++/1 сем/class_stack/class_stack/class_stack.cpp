// class_stack.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	StackArray<int> first(10);
	first.push(10);
	//first.push(1);
	first.pop();
	cout << first.top() << endl << first.size();
	return 0;
}
