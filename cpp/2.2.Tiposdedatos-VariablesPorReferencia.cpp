//variables por referencia
#include <iostream>
#include <stdio.h>

using namespace std;
void dobleymitad(int n, int& doble, int& mitad){{
	doble= n*2;
	mitad=n/2;
}
int main(){
	
	int n;
	int d=0;
	int m=0;
	cout<<"Escribe un numero:"<<endl;
	cin<<n;
	dobleymitad(n,d,m);
	cout<<"La mitad de "<<n<<"es "<<m<<end;
	cout<<"El doble de "<<n<<"es "<<d<<endl;
	
}
	return 0;
}
