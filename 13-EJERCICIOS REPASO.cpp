/**
13.- Determina qué vale x después de acabar el bucle
int i=100, x=0;
while (i>0)
{ x=x+1;
 i=i-1; }
a) 1
b) 99
c) 100
e) 50 **/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

printf("13.- Determina qué vale x después de acabar el bucle\nint i=100, x=0;\nwhile (i>0)\n{ x=x+1;\ni=i-1; }\n\n");
printf("a) 1 ");
printf("b) 99 ");
printf("c) 100 ");
printf("e) 50");

int i=100, x=0;
while (i>0)
{ x=x+1;
 i=i-1; }
printf("\n--------------------\n");
 printf("El resultado corrrecto es la c)");
printf("\n--------------------\n");
 cout<<"-El Resultado es: "<<x<<endl;
 printf("\n");
system("pause");
return 0;

}
