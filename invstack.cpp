#include "lib.hpp"

Pila<int> invstack(Pila<int> P, int a, int b)
{

	Pila<int> aux1;
	Pila<int> aux2;

	while(P.tope()!= a)
	{
		aux1.push(P.tope());
		P.pop();
	}

	aux1.push(P.tope());
	P.pop();

	while(aux1.tope()!=b)
	{
		aux2.push(aux1.tope());
		aux1.pop();
	}

	aux2.push(aux1.tope());
	aux1.pop();

	while(!aux2.vacia())
	{
		P.push(aux2.tope());
		aux2.pop();
	}

	while(!aux1.vacia())
	{
		P.push(aux1.tope());
		aux1.pop();
	}



	return P;


	
}