#include <iostream>

void main()
{
	for (int i = 1; i < 6; i++)
	{
		int *tableau = new int ;
		tableau [i] = i ;
		std::cout << tableau [i] << std::endl;
		delete tableau ;
	}
}