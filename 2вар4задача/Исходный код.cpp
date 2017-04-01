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
		
		cout<<"\nВведите 1-ое число: ";
        cin>>a;
        
		if ( (a - int(a)) != 0 )
        cout << "\n\n\tВведённое число не является целым!" << endl;
    else
        cout<<"\nВведите 2-ое число: ";
		cin>>b;
		
		if ( (b - int(b)) != 0 )
        cout << "\n\n\tВведённое число не является целым!" << endl;
    else
		cout<<"\nБольшее число:\t"<<func(a,b)<<endl;
		cin>>n;

	cout<<"\n\n\n\nЕсли хотите выполнить программу еще раз, введите (1)!\n";
	} while (cin>>q && q =='1');  	
	_getch();
	return 0;
}

int func(int x, int y)
{
    if (x > y) return x;
    else return y;
}