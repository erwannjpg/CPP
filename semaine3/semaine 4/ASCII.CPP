#include <iostream>
#include <limits>
#include <time.h>
#include <windows.h>
struct Chrono
{
	int duration ;
	float ElapsedTime ; 
};
char Output[11][11];
Chrono AskDuration(){
	Chrono Duree ;
	using namespace std;
	std::cout << "donnez la duree du chrono(en secondes) :" << std::endl ;
	std::cin >> Duree.duration ;
	while (Duree.duration < 1)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			std::cout << "veuillez donnez la duree du chrono(en secondes) :" << std::endl;
			std::cin >> Duree.duration;
		}
		return Duree;
	}
float GetTime(){
	
	 float TimeInSeconds = clock() / (float)CLOCKS_PER_SEC;
	return TimeInSeconds ;
}
void InitializeOutput() {
	for (int i = 0; i < 11; i++)
	{
		Output [i][v] = '-'
	}
	Output[5][5] = 'X';
	Output[5][1] = '|';
	Output[5][4] = '|';
}
void DisplayOutput(){
	int x =0;
	int y = 0;
	for (int v = 0; v < 121; v++)
		{
		std::cout << Output[x][y];
		x++;
		if (x=11)
		{
			std::cout<<std::endl;
			x= 0;
			y++;
		}
		
		}
		
}

	void main()
{
	InitializeOutput();
	DisplayOutput();
	Chrono chrono ;
	chrono.ElapsedTime = GetTime();
	chrono= AskDuration() ;
	
	while (chrono.ElapsedTime <chrono.duration)
	{
		chrono.ElapsedTime = GetTime();
		std::cout << chrono.ElapsedTime << std ::endl;
	}
	std::cout << "Fin du chrono ! \\[^_^]/" << std::endl;
}
