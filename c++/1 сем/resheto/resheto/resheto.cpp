#include <iostream>
using namespace std;
 
int main(){
    int i, j, S, N; //�������
	cout << "Enter  N ";
    cin >> S;
    N = S + 1;
    bool *mas =  new bool [N ];; //��������� ������ ���� bool
    for(i = 1; i<=S; i++)
		mas[i] = true; //��������� ������ ��������� true;
    for(i=2; ((i*i)<=S); i++)  //�������� "������ ����������"
	if(mas[i])
    for(j=(i*i); j<=S; j+=i)
        if(mas[j]) 
			mas[j]=false;
    for(i=1; i<=S; i++)
		if(mas[i]) 
			cout << i << " ";
        return 0;
}