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

	while(aux.tope()== *(cad+i) && !aux.vacia())
	{
		aux.pop();
		i++;
	}


	return aux.vacia();

}
