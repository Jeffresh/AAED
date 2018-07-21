#include "lib.hpp"




bool cmpsec(const char* sec)
{


	bool iscad = false;
	int posini = 0, posend =0;




	do
	{


		do
		{
			posend++;
		}while(*(sec+posend)!= '\0' && *(sec+posend)!= '#' );



		iscad = cmpstr(std::strncpy(new char,sec+posini,(posend-posini)));


		posini = posend+1;






	}while( *(sec+posend)!='\0' && iscad);


	return iscad;


}