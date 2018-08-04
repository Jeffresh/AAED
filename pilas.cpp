#include <iostream>
#include <fstream>

#include "lib.hpp"


int main()
{


	std::ifstream file;
	std::string str;
	file.open("file_in.txt");
	//std::getline(file,str);
	//file.close();

	/*if(cmpstr(str.c_str()))
		std::cout<<"Capicua!"<<std::endl;
	else
		std::cout<<" Not Capicua"<<std::endl;*/

	/*std::getline(file,str);
	file.close();

	if(cmpsec(str.c_str()))
		std::cout<<"Capicua!"<<std::endl;
	else
		std::cout<<"Not Capicua"<<std::endl;
		*/

	Pila<int> P;

	for(int i=0; i <=7 ; i++)
		P.push(i);

	Pila<int> Q =invstack(P,3,5);

	while ( !Q.vacia())
	{
		std::cout<<Q.tope()<<std::endl;
		Q.pop();
	}
}