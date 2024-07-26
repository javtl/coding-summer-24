/*
La sentencia switch:
switch(expresion){
case 1;
intrucciones
break;

case 2;
intrucciones
break;

case 3;
intrucciones
break;
}

*/

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"digita un numero: "cin>>num;
	switch(numero){
		case 1: cout<<"es 1"; break;
		case 2: cout<<"es 2"; break;
		case 3: cout<<"es 3"; break;
		case 4: cout<<"es 4"; break;
		case 5: cout<<"es 5"; break;
		default: cout<<"no es ningun numero entre 1y5"; break;	
		
	}
	
	return 0;
}
