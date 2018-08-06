#include "lib.hpp"

void wres(std::fstream& file_f4)
{
	Pila<int> P;

	
	std::string num1, num2;

	getline(file_f4,num1);
	getline(file_f4,num2);

	P.push(atoi(num1.c_str()));
	P.push(atoi(num2.c_str()));

	int a = P.tope(); P.pop();
	a += P.tope();


	std::string s = std::to_string(a);

	std::cout<<"First num in file: "<<num1<<std::endl<<"Second num in file: "<<num2<<std::endl<<"Writing the sum: "<<a<<std::endl;


	file_f4 << s.c_str();
}