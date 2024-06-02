/*
1.-Realizar un  algoritmo que permitan calcular el máximo común divisor
 de dos números enteros positivos. 
 
 NOTA: Busque información sobre el algoritmo de Euclides
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main(){
	int num1, num2;
	int residuo, mcd;
	cout<<"ingrese un primer numero: "; cin>>num1;
	cout<<"ingrese un segundo numero: "; cin>>num2;
	
	do{
		residuo= num1%num2;
		if(residuo!=0)
		{
			num1=num2;
		    num2=residuo;
		}
		
		else{
			mcd= num2;
		}
	}while (residuo !=0);
	cout<<"El maximo comun divisor es: "<<mcd<<endl:
system("pause");
	return 0;
}

