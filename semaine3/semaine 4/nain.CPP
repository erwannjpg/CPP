#include <iostream>
#include <limits>
#include <time.h>
#include <windows.h>
#include <list>
#include <string>
void main()
{
	std::list<std::string> myList;
	myList.push_back("Balin");
	myList.push_back("Bifur");
	myList.push_back("Bofur");
	myList.push_back("Bombur");
	myList.push_back("Dori");
	myList.push_back("Dwalin");
	myList.push_back("Fili");
	myList.push_back("Gloin");
	myList.push_back("Kili");
	myList.push_back("Nori");
	myList.push_back("Oin");
	myList.push_back("Ori");
	myList.push_back("Thorin");
	myList.push_back("Bilbo");
	myList.pop_back();
	for (auto &name : myList)
	{
		if (name.substr((name.size())-2)=="in")
		{
			std::cout <<name<<std::endl;
		}
		}
	std::list<std::string>::iterator it = myList.begin();
	std::advance(it, 12);
	std::string current = *it;
	while (current.size() < 6)
	{
		*it--;
		std::cout << current.size();
	}
	if (current.size() == 6)
	{
		std::cout << "le dernier est " <<current << std::endl;
	}
	
}
