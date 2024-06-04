#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
	
	printf("3.-El siguiente programa calcula dados los vertices de un triangulo el area del mismo:\n");
	printf("donde S1, S2 y S3 son las longitudes de los tres lados del triangulo y T es la mitad de su perímetro.\n");
	
	int s1,s2,s3,t;
	int s,raiz,exp;
	printf("\n--------------------\n");
	
	cout<<"ingrese el valor de s1: ";cin>>s1;
	cout<<"ingrese el valor de s2: ";cin>>s2;
	cout<<"ingrese el valor de s3: ";cin>>s3;
	cout<<"ingrese el valor de t: ";cin>>t;
	
	printf("\n--------------------\n");
		exp=t*(t-s1)*(t-s2)*(t-s3);
		raiz= sqrt(exp);
		s=raiz;
		
	cout<<"\nEl area del triangulo es: "<<s<<endl;
	
	printf("\n--------------------\n");	
		cout<<"\n";
	system("pause");
	return 0;
}
