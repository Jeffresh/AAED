#include "lib.hpp"

bool cmpstr(const char* cad)
{

	Pila<char> aux{};
	int i = 0;

	std::cout<<cad<<std::endl;

	while(*(cad+i)!= '&')
	{
		aux.push(*(cad+i));
		i++;
	}

	i++;

	while(!aux.vacia() && aux.tope()== *(cad+i))
	{
		aux.pop();
		i++;
	}


	return aux.vacia() ;

}
