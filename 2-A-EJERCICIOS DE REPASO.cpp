/**
2.- Traduzca las siguientes fórmulas 
a expresiones escritas en C, declarando para
ello las variables que considere necesarias:
A- f=(9/5)*c+32
**/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int f,c, exp=0;
	printf("Introduzca los valores para realizar la siguiente expresion: \nf=(9/5)*c+32");
	printf("\n--------------------\n");
	cout<<"Ingrese el valor de F: ";cin>>f;
	cout<<"Ingrese el valor de C: ";cin>>c;
	
	exp= (f=(9/5)*c+32);
	printf("\n--------------------\n");
	cout<<"El resultado de la expresion es: "<<exp<<endl;
	return 0;
	system("pause");
}
