#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	printf("3.- Cual es el resultado de evaluar las siguientes expresiones si suponemos que, inicialmente, x vale 1\n");
	printf("a. (x > 1) & (x++ < 10)\n");
	printf("b. (1 > x) && ( 1 > x++)\n");
	printf("c. (1 == x) | (10 > x++)\n");
	printf("d. (1 == x) || (10 > x++)\n");
	printf("e. (++x) + x;\n");
	printf("f. x + (++x)\n");

printf("\n-----------------------------------\n");
	int xa = 1;
	//a
		if(xa>1 & xa++<10){
	
			cout<<"a-"<<xa<<endl;
				}
					else{cout<<"a-no tiene resultado"<<endl;}
	int xb = 1;	
	
	//b
		if((1 > xb) && ( 1 > xb++)){
			cout<<"b-"<<xb<<endl;
				}else{cout<<"b-no tiene resultado"<<endl;}
	int xc=1;
	
	//c
		if((1 == xc) | (10 > xc++)){
			cout<<"c-"<<xc<<endl;}
	int xd=1;
	
	//d
		if( (1 == xd) || (10 > xd++)){
			cout<<"d-"<<xd<<endl;}
	int xe=1;
	
	//e
		if((++xe) + xe){
			cout<<"e-"<<xe<<endl;}
	int xf=1;
	
	//f
		if(xf + (++xf)){
			cout<<"f-"<<xf<<endl;}
	return 0;
	system("pause");
}
