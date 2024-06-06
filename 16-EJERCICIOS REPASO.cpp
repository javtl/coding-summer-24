#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
printf ("16.- ¿Que hace el siguiente fragmento de codigo? \n\nint array[10],i=0;\nwhile(i<10){\narray[i]=i*i;\ni++;}\ndo{cout<< array[--i]) ;\n} while(i>=0;\n");
printf("\n----------------------\n");
printf("Mientras i sea menor a 10 el array sera iguak a i x i e i incrementara, el array se mostrara en pantalla mientras i sea mayor o igual a 0.");
printf("\n----------------------\n");
int array[10],i=0;

	while(i<10){
	
		array[i]=i*i;
		i++;
	}

		do{
			printf("-El Resultado es:");
				cout<< array[--i]<<endl;
		} 
			while(i>=0);
printf("\n");
return 0; 
system ("pause");
}
