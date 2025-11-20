#include <iostream>
#include <limits>
#include <time.h>
#include <windows.h>
#include <list>
#include <string>
#include <map>
#include <vector>
void main()
{
	int NbPlayer;
	std::cout << "indiquez le nombre de joueur"	;
	std::cin >> NbPlayer ;
	std::vector<int> PlayerScore(NbPlayer, 0);
	int tailleplateau = 10+2*NbPlayer;
	std::vector<std::vector<bool>> Plateau(10 + 2 * NbPlayer, std::vector<bool>(10 + 2 * NbPlayer, false));
	NbPlayer+=1;
	PlayerScore.resize(NbPlayer);
	Plateau.resize(10 + 2 * NbPlayer);
}

