#include <iostream>
#include <stdlib.h>
#define N 10
using namespace std;
main(){
	int v [N] = {10,20,30,40,50,60,70,80,90,100};
	int x = 1;
	while(x<N){
		v[x]=0;
		x = x + x;
	}
	for(x=N-1; x >= 0; x--)
		if (v[x] == 0)
			v[x] = v[x-1] + v[x+1];
	for (x=N-1; x>=0; x--)
	cout<<v[x];
	system("pause");
	return 0;
}
