/*
PUNTEROS -> declaracion de punteros

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n
*/
#include <iostream>
#include <conio.h>
#inlcude <stdlib.h>
using namespace std;
int main(){
	
	int num;
	int *dir_num;
	num = 20
	dir_num= &num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"direccion de memoria: "<<dir_num<<endl;
	system("pause");
	return 0;
}
