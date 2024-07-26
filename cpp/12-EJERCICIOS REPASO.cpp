/** 12.- Determina qué vale x después de acabar el bucle
int i=0, x=0;
while (i<100)
{ x=x+1;
 i=i+2; }

a) 49
b) 50
c) 51
d) 100 **/

#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){

printf("12.- Determina qué vale x después de acabar el bucle\n \nint i=0, x=0;\n while (i<100)\n { x=x+1; \n i=i+2; }\n");
printf("\na) 49. ");
printf("b) 50. ");
printf("c) 51. ");
printf("d) 100. \n");

    int i=0, x=0;
    while (i<100)
    { x=x+1;
    i=i+2; }
printf("\n---------------------\n");

printf("El valor de x seria 50\n\n");
printf("-Resultado:\n");
    cout<<x;
printf("\n---------------------\n\n");


    system("pause");
return 0;
}
