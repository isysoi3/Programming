// 7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Rus");
	cout <<"������� �����"<<endl;
	int n,a,b;
	cin >>n;
	cout <<"���������:";
	for (int i = 11; i < n; i++)
	{
		a=i;
		b=0;
		while (a>0)
		{
			b=b*10+a%10;
			a/=10;
		}
		if (b==i){
			cout <<i<<",";
		}
	}
	cout <<endl;
	return 0;
}