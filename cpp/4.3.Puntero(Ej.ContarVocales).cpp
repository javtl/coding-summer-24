#include <iostream>
#include <stdlib.h>
#include<string.h>7//funciona strupr()
using namespace std;
//prototipo de funcion
void pedirdatos();
int contandovocales(char*);
char nombreusuario[30];

int main(){
	pedirdatos();
	cout<<"\nEl numero de vocales es:" <<contandovocales(nombreusuario)<<endl;
	
	system("pause");
	return 0;
}

void pedirdatos(){
	cout<<"digite su nombre: ";
	cin.getline(nombreusuario,30,'\n');
	
	strupr(nombreusuario); //transforam a mayuscula el nombre
	
}
int contandovocales(char *nombre){
	int cont =0;
	while (*nombre){
		switch(*nombre){
			case'A':
			case'E':
			case'I':
			case'O':
			case'U': cont++:
		}
		nombre++;
	}
}
