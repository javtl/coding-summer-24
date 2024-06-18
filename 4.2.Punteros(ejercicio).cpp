/*
Comprobar si un numero es par o impar, señalar la posicion de memoria
donde esta guardado con punteros
*/
#include <iostream>
#include <conio.h>
#inlcude <stdlib.h>
using namespace std;
int main(){
	int numero, *dir_num;
	cout<<"Ingrese un numero: "; cin>>numero;
	dir_num = &numero // guarda la posicion de memoria
	if(*dir_numero%2==0){
		
		cout<<"el numero"<<dir_num<<"es par"<<endl;
		cout<<"posicion: "<<dir_num<<endl;
	}
	else{
		cout<<" el numero: "<<numero<<"es impar"<<endl;
		cout<<"su posicion es: "<<dir_num<<endl;
	}
	return 0;
}
