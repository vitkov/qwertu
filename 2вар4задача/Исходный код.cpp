#include <conio.h>
#include <iostream>
#include <cmath>

using namespace std;
int func(int x,int y)
int main()

{
	setlocale(LC_ALL,"Russian");
	char q;
	do { 
					
		float a,b;
		
		cout<<"\n������� 1-�� �����: ";
        cin>>a;
        
		if ( (a - int(a)) != 0 )
        cout << "\n\n\t�������� ����� �� �������� �����!" << endl;
    else
        cout<<"\n������� 2-�� �����: ";
		cin>>b;
		
		if ( (b - int(b)) != 0 )
        cout << "\n\n\t�������� ����� �� �������� �����!" << endl;
    else
		cout<<"\n������� �����:\t"<<func(a,b)<<endl;
		cin>>n;

	cout<<"\n\n\n\n���� ������ ��������� ��������� ��� ���, ������� (1)!\n";
	} while (cin>>q && q =='1');  	
	_getch();
	return 0;
}

int func(int x, int y)
{
    if (x > y) return x;
    else return y;
}