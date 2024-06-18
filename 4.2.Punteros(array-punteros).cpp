// CORRESPONDENCIA  array y punteros

#include <iostream>
#include <conio.h>
#inlcude <stdlib.h>
using namespace std;
int main(){
	int numeros[] = {1,2,3,4,5};
	int *dirnum;
	dirnum = numeros;
	
	for(int=0;i<5;i++){
		cout<<"elemento del vector["<<i<<"]"<<*dirnum++<<endl;
	}
	return 0;
}
