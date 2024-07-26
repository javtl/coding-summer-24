/*2.- Traduzca las siguientes fórmulas 
a expresiones escritas en C:
Raiz 1+(Eex/Xe2)e2
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	int x,e,exp,div_interna, elevacion_parentesis, suma;
printf("Itroduzca los valores para E y X: \n RAIZ(1+((Eex/Xe2)e2))");
printf("\n--------------------\n");
	cout<<"ingrese un valor para E: "; cin>>e;
	cout<<"Ingrese un valor para X: "; cin>>x;
	
	div_interna = pow(e,x)/pow(x,2); // divide Eex/ Xe2
	
	elevacion_parentesis = pow(div_interna,2); // Eleva al cuadrado Eex/Xe2
	
	suma = 1+elevacion_parentesis; // hace la suma de 1+ el parentesis
	
	exp=sqrt(suma); // hace la raiz de la expresion
	printf("\n--------------------\n");
	cout<<"El resultado de la expresion es: "<<exp<<endl;
	system("pause");
	return 0;
}
