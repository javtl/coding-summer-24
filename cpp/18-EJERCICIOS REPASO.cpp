#include <stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
int main (){
printf("18.- Describir el objetivo del siguiente programa:");	
printf("\n---------------------\n");
printf("#include <stdio.h>\nmain ( )\n{\nint numero, cif, nums, parte;\ncout<<(numero) ;\ncin >>numero;\nparte=numero;\nnums=0;\n (parte != 0)\n{\ncif=parte%10;\nparte=parte/10;\nnums=nums+1;\n}\ncout<< numero << nums;\n}");
printf("\n---------------------\n");
printf("El siguiente programa hace:\n\n 1-Se ingresa un numero en la variable numrero.\n 2-Mientras la variable declarada como parte sea distinta a 0 el programa continuara.\n 3-cif sera igual a el resto de parte /10.\n 4-Parte sera igual que parte / 10.\n 5-La variable nums sera igual a nums+1.\n 6-Se imprimira por pantalla numero y nums.\n");
printf("---------------------\n");
printf("-Resultado:");
{
int numero, cif, nums, parte;
cout<<numero;
cin >>numero;
parte=numero;
nums=0;
while (parte != 0)
{
cif=parte%10;
parte=parte/10;
nums=nums+1;
}

cout<< numero <<nums;
}
system("pause");
return 0;
}

