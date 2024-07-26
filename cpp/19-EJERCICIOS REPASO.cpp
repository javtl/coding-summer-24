#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
	printf("19.- ¿Que hace el siguiente fragmento de codigo? \n");
	printf("----------------------\n");
	printf("int array[10],i; \nfor(i=0; i<10; i++){\narray[i]=i*i;\n}\nfor(i=0; i<10; i++){\ncout<<array[i] << endl"); 
	printf("\n----------------------\n");
	printf("1-Para un array declarado con 10 posiciones y una variable i.\n2-Para i=0,i<10. i aumento en 1.\n3-El array completado con i es igual a i*i.\n4-Para i igual a 0 i<10. i aumenta en 1. \n5- se imprime  array[i] por pantalla.");
int array[10],i; for(i=0; i<10; i++){
array[i]=i*i;
}
printf("\n----------------------\n");
printf("-Resultado:");
for(i=0; i<10; i++){
cout<<array[i] << endl;
}

return 0;
system("pause");
}
