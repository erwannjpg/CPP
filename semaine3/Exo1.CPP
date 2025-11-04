#include <iostream>
void Start(int &remainingTurn, int &playerId) ;
void Change( int &playerId) ;
void Endturn(int &remainingTurn, int &playerId) ;
int main()
{
	int remainingTurn = 100;
	int playerId = 0;
	while(remainingTurn>0)
	{
		Start(remainingTurn, playerId);
		Change( playerId);	
		Endturn( remainingTurn,  playerId );
}
}
void Start(int &remainingTurn, int &playerId )
{
std::cout << "Starting turn for player : " << playerId << "." << std::endl;
}
void Change(int &playerId )
{
	std::cout << "Player " << playerId << " has played. Switching player."
			  << std::endl;
	
	playerId = (playerId + 1) % 2;
}
void Endturn(int &remainingTurn, int &playerId  )
{
	
	std::cout << "End of turn. " << remainingTurn << " turns left." << std::endl;
	 --remainingTurn;
}