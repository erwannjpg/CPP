#include <iostream>
#include <limits>
#include <time.h>
#include <windows.h>
#include <list>
#include <string>
#include <map>
void main()
{
	std::map<std::string, int> Dico;
	Dico["chat"] = 4;
	Dico["araigne"] = 8;
	Dico["humain"] = 2;
	Dico["chien"] = 4;
	Dico["dodo"] = 2 ;
	Dico["mouton"] = 4;
	Dico["serpent"] = 0 ;
	std::map<std::string,int >::iterator it = Dico.find("humain");
	std::cout << (*it).second << std::endl;
	std::map<std::string, int>::iterator crazy = Dico.find("Licorne");
	Dico.erase("dodo");
	Dico["mouton"] +=  1 ;
	std::cout << Dico["mouton"]<<std::endl;
	for (auto &name : Dico)
	{
		if (name.second==4)
		{
			std::cout << name.first << std::endl;
		}
	}
}