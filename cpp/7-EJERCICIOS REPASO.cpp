/**
.- Escribe un programa que calcule el sueldo semanal de un trabajador a partir de los 
siguientes datos que se pedirán al usuario:
? Cuánto cobra el trabajador por cada hora trabajada, debe ser un entero positivo.
? Cuántas horas ha trabajado 7en una semana, debe ser un entero positivo.
El programa debe calcular el sueldo teniendo en cuenta que el trabajador cobra el doble 
por una hora extra que por una hora de trabajo normal. Las horas de trabajo por semana 
son 40 (aunque pueden ser menos), el resto son horas extra. El sueldo resultante se 
mostrará por pantalla. El programa deberá dar un mensaje de error si alguno de los datos 
introducidos no es válido. Por ejemplo, si el usuario introduce 10 como precio
por hora trabajada, y 50 horas trabajadas, el programa responderá 40*10 + 10*(10*2) 
**/
#include <iostream>
#include<stdlib.h>
#include <math.h>

using namespace std;
int main(){
	
	printf("7.- El siguiente programa calcula el sueldo semanal de un trabajador a partir de los \nsiguientes datos que se pediran al usuario:\n");
	printf("\n---------------------\n");
	int sueldoxhora, horas_trabajadas,horas_extra;
	int sueldo, extras,dinero_total;
	// Se usa un bucle para cuando el numero ingresado sea 0 o negativo se repita hasta que el numero sea entero positivo
	do{
		printf("\tLa cantidad introducida debe ser un numero enrtero positivo!!!\n\n");
		cout<<"ingrese el dinero pagado por horas: "; cin>>sueldoxhora;	
		printf("\n---------------------\n");
	}while(sueldoxhora<=0);
	
	cout<<"Ingrese el numero de horas trabajadas: "; cin>>horas_trabajadas;
	
	//se usa un condicional para asi calcular las horas extra
	if(horas_trabajadas>=40){
		
		horas_extra=horas_trabajadas-40; // las horas tranbajadas - 40(jornada estandar) es igual a a las horas extras
		sueldo=horas_trabajadas*sueldoxhora; // sueldo
		extras=horas_extra*(sueldoxhora*2); // dinero en horas extras
		
		dinero_total=extras+sueldo; // sueldo y horas extras
	}
	
	//resultados
	printf("\n---------------------\n");
	printf("\n\t-El dinero pagado por horas es:");
		cout<<sueldoxhora<<endl;
		
	printf("\t-La cantidad de horas trabajadas son:");
		cout<<horas_trabajadas<<endl;
		
	printf("\t-El sueldo base es:");
		cout<<sueldo<<endl;
		
	printf("\t-El dinero por horas extras es:");
		cout<<extras<<endl;
	
	printf("\t-El dinero total ganado es:");
		cout<<dinero_total<<endl;
	
	return 0;
	system("pause");
}
