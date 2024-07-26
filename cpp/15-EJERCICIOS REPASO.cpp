#include <iostream>
#include <stdlib.h>


using namespace std;

int main(void){
	int n;
	printf("15.- Realizar un programa que solicite un número entero por teclado y a continuacion \nvisualice por pantalla todos los números primos entre 1 y el número introducido.\n");
	printf("---------------------\n");
	cout<<"ingrese un numero:";cin>>n;
	printf("---------------------\n");
	for(int i=2;i<n;i++){
		int creciente = 2;
		bool esPrimo = true;
		
		while(esPrimo && creciente<i){
			if(i % creciente==0){
				esPrimo = false;
				
			}
			else{
			creciente++;
			}
		}
		if(esPrimo){
			cout<<i<<" -Es un numero primo"<<endl;
		}
	}
	printf("---------------------\n");
system("pause");
return 0;	
}


