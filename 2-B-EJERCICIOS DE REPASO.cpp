/**
2.- Traduzca las siguientes fórmulas 
a expresiones escritas en C, declarando para
ello las variables que considere necesarias:
f(x,y)=(1+x^2/y)/(x^3/1+y);
**/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
	int x,y,exp;
	printf("Introduzca los valores para la siguiente expresion: \nf*(x,y)=(1+((x2)/(y)))/((x3)/(1+y))");
	printf("\n--------------------\n");
	cout<<"Ingrese el valor de x: ";cin>>x;
	cout<<"Ingrese el valor de y: ";cin>>y;
	
	exp = (1+pow(x,2)/y)/(pow(x,3)/1+y);
	
	printf("\n--------------------\n");
	cout<<"El resultado de la expresion es: "<<"f(x,y)="<<exp<<endl;
	system("pause");
	return 0;
}
