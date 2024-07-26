//operadores
#include <iostream>
#include<stdlib.h>
using namespace std;
 main(){
	int suma= 0, resta=0, multiplicacion=0, division=0, resto=0;
	
	int numero1=5;
	int numero2=10;
	
		suma=numero1+numero2;// "+"
		resta=numero2-numero1;// "-"
		multiplicacion=numero1*numero2;// "*"
		division=numero2/numero1;// "/"
		resto= numero2%numero1;// "%"
		
		cout<<"suma\n"<<suma<<"\nresta\n"<<resta<<"\nmultiplicacion\n"<<multiplicacion<<"\ndivision\n"<<division<<"\nresto\n"<<resto<<endl;
	system("pause");
	return 0;
}
