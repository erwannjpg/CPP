#include <iostream> 
struct Coordinate
{
	int i;
	int j;
};
Coordinate FindHighestAdjacent(Coordinate cord, int tab[5][5]) ;
Coordinate bestway(Coordinate cord, int movemax, int tab[5][5]);
int main()
{
	int bestValue ;
		Coordinate start = {2, 2};
	int tab[5][5] = {{0, 8, 7, 1, 5}, {3, 5, 2, 8, 9}, {0, 4, 0, 1, 0}, {2, 4, 3, 6, 1}, {1, 4, 3, 1, 0}};
	std::cout << "Je suis sur [" << start.i << "]["<< start.j <<"] qui contient "<<tab[start.i][start.j] << std::endl;
	int movemax ;
	std::cout << "donnez le nombre max de déplacement  : ";
	std::cin >> movemax;
	bestway(start, movemax, tab);	
}
Coordinate FindHighestAdjacent(Coordinate cord, int tab[5][5])
{
	Coordinate bestCoord =cord ;
	int bestValue = tab[cord.i][cord.j];
	if (cord.j - 1 >= 0 && tab[cord.i][cord.j - 1] > bestValue)
	{
		bestValue = tab[cord.i ][cord.j -1];
		bestCoord = {cord.i,cord.j - 1};
	}
	if (cord.j + 1 <= 5 && tab[cord.i][cord.j + 1] > bestValue)
	{
		bestValue = tab[cord.i][cord.j+1];
		bestCoord = {cord.i, cord.j + 1};
	}
	if (cord.i - 1 >= 0 && tab[cord.i-1][cord.j]  > bestValue)
	{
		bestValue = tab[cord.i-1][cord.j];
		bestCoord = {cord.i-1, cord.j};
	}
	if (cord.i + 1 <= 5 && tab[cord.i+1][cord.j] > bestValue)
	{
	
		bestValue = tab[cord.i+1][cord.j];
		bestCoord = {cord.i+1, cord.j };
	}
	std::cout << "Je suis sur [" << bestCoord.i << "][" << bestCoord.j << "] qui contient " << bestValue << std::endl;
	return bestCoord ;
}
Coordinate bestway(Coordinate cord, int movemax, int tab[5][5])
{
	if ( movemax == 0)
	{
		return cord;
	}
	movemax = movemax - 1;
	cord = FindHighestAdjacent(cord, tab);
	return bestway(cord,movemax,tab) ;
	
}