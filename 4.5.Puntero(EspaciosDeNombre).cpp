#include<iostream>
//DISTINTAS variables con el MISMO nombre
namespace ciudad
{
	int calle;

}
namespace pueblo
{
	int calle = 10;
}

using namespace ciudad; // CAMBIA la variable ciudad 
int main(){
	calle = 12;
	std::cout<<pueblito::calle<<std::endl; //std:: -> no usamos namespace std;
	std::cin.getline();
	return 0;
}n 
