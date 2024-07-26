/** 
5.-Dada una medida de tiempo expresada en horas, minutos y segundos con valoresarbitrarios.
elabore un programa que transforme dicha medida en una expresion correcta.
Por ejemplo, dada la medida 3h 118m 195s, 
el programa debera obtener como resultado 5h 1m 15s.
**/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
	
	int h, m,s;
	int hx,mx,sx;
	int tiempo_en_segundos,horas,minutos,segundos;
	
	printf("5-Dada una medida de tiempo en horas, minutos y segundos.\nEl siguiente programa transforma dicha cantidad en una expresion correcta:");
	printf("\n---------------------\n");
	cout<<"\n-Ingrese la cantidad de horas:"; cin>>h; 
	cout<<"-Ingrese la cantidad de minutos:"; cin>>m; 
	cout<<"-Ingrese la cantidad de segundos:"; cin>>s; 
	
	h*3600;
	m*60;
	s;
	
	tiempo_en_segundos=((h*3600)+(m*60)+s);
	
	horas=tiempo_en_segundos/3600;
	segundos=tiempo_en_segundos%3600;
	minutos=segundos/60;
	segundos=segundos%60;
	printf("\n---------------------\n");
	printf("\nEl resultado es:\n");
	cout<<horas<<"h"<<minutos<<"m"<<segundos<<"s"<<endl;
	
	printf("\n");
	system("pause");
	return 0;
}
