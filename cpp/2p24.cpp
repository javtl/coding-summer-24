#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	int i, x=0;
	for(i=0; i<100;i=i+2) x=x+1;
	
	cout<<x<<endl; // x=50
	
	system("pause");
	return 0;
}
