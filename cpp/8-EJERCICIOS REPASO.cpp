#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){

    printf("8.- Escribe un programa que dado un entero positivo leido por teclado, muestre por \npantalla el digito de menor peso y que sea par. Por ejemplo: si el número es 83423, el \ndigito par de menor peso es el 2 que ocupa la posicion de las decenas; si el numero es \n379, no hay ningún dígito par; etc.\n");
    printf("\n----------------------\n");
int numero;
int und, dec, cent, mill,mimill;
int u,d,c,m,mm;
do{cout<<"ingrese un numero de hasta 5 cifras: ";cin>>numero;}
while(numero>99999);


und=numero%10;
dec=numero%100;
cent=numero%1000;
mill=numero%10000;
mimill=numero%100000;

u=und;
d=(dec-und)/10;
c=(cent-dec)/100;
m=(mill-cent)/1000;
mm=(mimill-mill)/10000;
/**cout<<"unidades: "<<und<<endl;
cout<<"decenas: "<<dec<<endl;
cout<<"centenas: "<<cent<<endl;
cout<<"millares: "<<mill<<endl;
cout<<"miles de millar: "<<mimill<<endl; **/
printf("\n----------------------\n\n");
if(u>0){
cout<<"-Unidades: "<<u<<endl;}
if(d>0){
cout<<"-Decenas: "<<d<<endl;}
if(c>0){
cout<<"-Centenas: "<<c<<endl;}
if(m>0){
cout<<"-Millares: "<<m<<endl;}
if(mm>0){
cout<<"-Miles de Millar: "<<mm<<endl;}
printf("\n----------------------");
//ordenacion de numeros

int numeros[] = {u,d,c,m,mm};

int i,j,aux;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        if (numeros[j] > numeros[j+1]){
            aux=numeros[j];
            numeros[j]=numeros[j+1];
            numeros[j+1] = aux;
        }
    }
}

cout<<"\nOrden Ascendentes: ";
for(i=0;i<6;i++){
    cout<<numeros[i]<<" ";
}
printf("\n");
return 0;
system("pause");
}
