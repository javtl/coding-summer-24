/**
10.- Un numero entero es elemental si es divisible por 3 o 5,
pero no por 4. que expresion logica devuelve "cierto" si un numero entero "i"
es elemental:
a) (i % 3 == 0 || i % 5 == 0) && ( i % 4 != 0)
b) (i % 3 == 0 || i % 5 == 0) && ! ( i % 4 != 0)
c) (i % 3 == 0 || i % 5 == 0) && ( i % 4 == 0)
d) (i % 3 == 0 || i % 5 == 0) || ! ( i % 4 != 0)
e) (i % 3 == 0 || i % 5 == 0) || ( i % 4 != 0)
**/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int main(){

int i;

printf("10.- Un numero entero es elemental si es divisible por 3 o 5, pero no por 4.\nQue expresion logica devuelve (cierto) si un numero entero (i) es elemental:");
printf("\na) (i % 3 == 0 || i % 5 == 0) && ( i % 4 != 0)\n");
printf("b) (i % 3 == 0 || i % 5 == 0) && ! ( i % 4 != 0)\n");
printf("c) (i % 3 == 0 || i % 5 == 0) && ( i % 4 == 0)\n");
printf("d) (i % 3 == 0 || i % 5 == 0) || ! ( i % 4 != 0)\n");
printf("e) (i % 3 == 0 || i % 5 == 0) || ( i % 4 != 0)\n");

printf("\n---------------------\n");
printf("Las respuestas correctas son la A, D, E. ");
printf("\n---------------------\n");

printf("Ejemplo de codigo con la respuesta A-:");
printf("\n---------------------\n");

cout<<"\n-Ingrese un numero para ver si es elemental o no: ";
cin>>i;
if (   (i % 3 == 0 || i % 5 == 0) && ( i % 4 != 0)  )

{printf("\n---------------------\n");cout<<"\n\tCORRECTO!!!"<<" El numero ingresado es elemental"<<endl;}
else{cout<<"El numero ingresado no es elemental"<<endl;}

return 0;
system("pause");
}
