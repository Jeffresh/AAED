#include <iostream>
#include <fstream>

#include "pila_enla.hpp"
#include "comcadena.hpp"


int main()
{


	std::ifstream file;
	std::string str;
	file.open("file_in.txt");
	std::getline(file,str);
	file.close();

	if(compcadena(str.c_str()))
		std::cout<<"Capicua!";
	else
		std::cout<<" Not Capicua";

}