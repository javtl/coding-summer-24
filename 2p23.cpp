#include <iostream>
#include <stdlib.h>

using namespace std;
// Ingresa una letra y da un numero
int main(){
	
	char done, ch;
	cout<<"introduce una letra:";
	done=0;
	while(!done)
	{
		cin>>ch;
		if(ch=='$')
		{
			done=1;
			continue;
		}
	cout<< ch+1;	
	}
	
	
	system("pause");
	return  0;
}
