#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() 

int num,ind;
num=1;
ind=1;

while (num<=20)
{
if ((ind%5==0) || (ind%7==0))
{
cout<< num<< ind<<endl;
num++;
}
ind++;
}
return 0;
system ("pause");
}

