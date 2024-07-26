/** 14.- ¿Cuántas iteraciones del bloque se realizan al ejecutar el siguiente bucle?:
for (i=0 ; i <10 ; i=i+2)
//{ for (j=0 ; j <10 ; j=j+2) /* bloque*
//}
//a) 16
//b) 100
//c) 50
//d) 25 
**/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	int i,j;
	printf("14.- ¿Cuantas iteraciones del bloque se realizan al ejecutar el siguiente bucle?: \nfor (i=0 ; i <10 ; i=i+2) \n{ for (j=0 ; j <10 ; j=j+2) {/* bloque*/} \n} \na) 16\nb) 100\nc) 50\nd) 25\n ");
	printf("\n----------------------\n");
	for (i=0 ; i <10 ; i=i+2)
{ for (j=0 ; j <10 ; j=j+2) {/* bloque*/}
}
	printf("La respuesta correcta es la b).\nSe realizaran 100 interacciones en el bloque al ser ejecutado.\n");
	return 0;
	system("pause");
}
