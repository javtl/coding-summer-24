/**
6-programa, que solicita una cantidad considerada una apuesta, el programa realiza 
el lanzamiento de forma aleatoria de una moneda, si sale cara el jugador gana el doble de la 
apuesta realizada, si sale cruz no gana nada.
**/

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int main(){
	int dato;
	double apuesta,ganancia;
	srand(time(NULL));
	dato=2+rand()%(100);
	printf("6-El siguiente programa lanza aleatoriamente una moneda: haciendo una apuesta si sale cara se ganara el doble de lo apostado, si sale cruz se perdera la apuesta.\n\n");
	printf("----------------------\n");
	cout<<"\t-Ingrese la cantidad a postar: "; cin>>apuesta;
	
	printf("----------------------\n");
	if(dato<=50){
		ganancia=apuesta*2;
		
		cout<<"\tHa salido cara"<<endl;
		cout<<"\tHa ganado: "<<ganancia;
	}else{
		cout<<"\n\tHa salido cruz"<<endl;
		printf("\tHA PERDIDO EL DINERO APOSTADO\n");
	}
	
	printf("\n----------------------\n");
	printf("\n");
	system("pause");
	return 0;
}
