#include "pila_enla.hpp"

bool compcadena(const char* cad)
{

	Pila<char> aux{};
	int i = 0;

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


	return aux.vacia();

}
