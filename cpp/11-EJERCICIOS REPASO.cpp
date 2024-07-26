/**
11.- La expresión que es falsa si y sólo si un valor real x está en el intervalo abierto
(3.0,4.0) (sin incluir los extremos) es:
a) (x<=3.0) || (x>=4.0)
b) (x<3.0) && (x>4.0)
c) (x>=3.0 || x<=4.0)
d) ! (x<=3.0) && !(x>=4.0)
e) (x<3.0) || (x>4.0)
**/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
    //a) (x<=3.0) || (x>=4.0) - AL TENER LA OPCION || (or) PUEDE SER VALIDA
    //c) (x>=3.0 || x<=4.0) - DA UN NUMERO
    //d) ! (x<=3.0) && !(x>=4.0) -ES UNA NEGACION POR LO QUE ES CORRECTO

        // Intervalo abierto -> 3.0<x , x<4.0
int main(){
   int x;
   printf("11.- La expresion que es falsa si y solo si un valor real x esta en el intervalo abierto(3.0,4.0) \n(sin incluir los extremos) es:\n\n");
        printf("a) (x<=3.0) || (x>=4.0)\n");
        printf("b) (x<3.0) && (x>4.0)\n");
        printf("c) (x>=3.0 || x<=4.0)\n");
        printf("d) ! (x<=3.0) && !(x>=4.0)\n");
        printf("e) (x<3.0) || (x>4.0");

    printf("\n---------------------\n");
    cout<<"-Ingrese un numero: "; cin>>x;
    do
        {
        printf("\n---------------------\n");
        printf("\n\tEl numero ingresado debe estar dentro del intervalo (3.0,4.0)\n\n");
        printf("---------------------\n");
        cout<<"-Ingrese un numero: "; cin>>x;
        printf("---------------------\n");
            }while((x<3.0 && x<4.0));

                if (x>=3.0 || x<=4.0){

                        printf("\n\t\t\t---CORRECTO!!!---\n");
                        cout<<"\n\tEl numero ingresado esta en el intervalo abierto de (3.0,4.0)"<<endl;
    }
printf("\n\n");
return 0;
system("pause");
}
