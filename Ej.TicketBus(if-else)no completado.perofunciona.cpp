#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
 
using namespace std;

//hora actual en hh : mm : ss
int main(int argc, char* argv[]){
	


    SYSTEMTIME stBuffer;
    char buffer[9];
 
    GetLocalTime(&stBuffer);
    GetTimeFormat(LOCALE_SYSTEM_DEFAULT,
                  TIME_FORCE24HOURFORMAT,
                  &stBuffer, "hh':'mm':'ss",
                  buffer,
                  sizeof(buffer));
    //cout<<buffer; // Imprime la hora actual
    
    int  importe, destino, saldo = 10;
    double saldo_actual;
    char usuario[20];
    
    cout<<"introduzca su nombre de usuario: "; cin>>usuario;
    cout<<"\n1-La Linea\n2-Algeciras\n3-San Roque"; 
	cout<<"\n\nintroduzca el numero de su destino:"; cin>>destino;
	
	while(destino >3){
		
		cout<<"\n\n\tEL NUMERO DE DESTINO INGRESADO ES INCORRECTO\n";
		cout<<"\nintroduzca el numero de su destino: "; cin>>destino;
	}
	
		if(destino = 1, importe = 1.5){
		saldo_actual = saldo - importe;
	}
		else{
			if(destino = 2, importe = 1.5){
				saldo_actual = saldo - importe;
			}else{
				if(destino = 3,  importe = 0.93){
					saldo_actual = saldo - importe;
				}
			}
		}
		
		cout<<"\n";
		cout<<"\n-----------------\n";
	cout<<buffer<<"\n";
	
	cout<<"\nNOMBRE DE USUARIO:"<<usuario;  //imprime el nombre de usuario etc...
	
	cout<<"\n\nCONSUMO DE TARJETA \nTITULO MONEDERO"; 
	cout<<"\n0 SALTOS";
	cout<<"\n-----------------\n";
	cout<<"\n\nIMPORTE: "<<importe;
	cout<<"\nIVA Y SOV incluidos";
	cout<<"\nSALDO TARJETA:  "<<saldo_actual;
   
    printf("\n----------\nMUEVETE EN TRANSPPORTE\nPUBLICO Y DISFRUTA DE\nSUS VENTAJAS\n----------\n");
    
	
	
	
cout<<"\n";
system("pause");
return 0;
}

