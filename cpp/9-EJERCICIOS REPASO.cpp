#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
    printf("9 .- Escribir un programa que lea una cadena de la siguiente manera 32.43. esta \ncadena debera contener un numero real. El programa debera traspasar este tipo de dato \ncadena a un numero real.\n");
    printf("\n------------------------\n");

    char cadena[]= "32 43";
    float numero;



    numero = atof(cadena);
    printf("-La cadena  ingresada en numero es:");
    cout<<numero<<endl;





    return 0;
system("pause");
}



