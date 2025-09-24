#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
bool isKeyPressed()
{
if (_kbhit())
{
while (_kbhit()) 
{
_getch();
}
return true;
}
return false; 
}
int main() {
    srand(time(NULL));
    float minTime = 1.0f;
    float maxTime = 10.0f;
    float winInterval = 1.0f; 
    bool hasloose = false;
    int i = 0;
    while (!hasloose)
    {
     {
        float timeToFind = ((float)rand() / (float)RAND_MAX) * (maxTime - minTime) + minTime;
        i = i + 1;
        if (i > 10) {
            cout << "Tu as gagne 10 fois de suite ! Bravo !" << endl;
            break;
        }
        cout << "\n=== Jeu du chrono (" << i << "/10) ===" << endl;
        cout << "Regles :\n";
        cout << "1. Un temps aleatoire entre " << minTime << " et " << maxTime << " secondes va etre choisi." << endl;
        cout << "2. Appuie sur une touche pour demarrer le chrono." << endl;
        cout << "3. Essaie de re-appuyer sur une touche apres exactement " << timeToFind << " secondes !" << endl;
        cout << "Appuie sur une touche pour voir le temps a atteindre..." << endl;
        _getch();

        cout << "\nLe temps a atteindre est : " << timeToFind << " secondes." << endl;
        cout << "Appuie sur une touche pour demarrer le chrono..." << endl;
        _getch();

        clock_t start = clock();
        cout << "Chrono lance ! Appuie sur une touche pour l'arreter..." << endl;
        _getch();
        clock_t end = clock(); 
        Sleep(100);
        if (isKeyPressed()) {
            end = clock();
            cout << "too late u loose !" << endl;
        }

        float elapsed = float(end - start) / CLOCKS_PER_SEC;
        cout << "\nTemps ecoule : " << elapsed << " secondes." << endl;

        float diff = elapsed - timeToFind;
        cout << "Difference avec le temps cible : " << diff << " secondes." << endl;

        if (abs(diff) <= winInterval) {
            cout << "Bravo, tu as gagne !" << endl;
            winInterval *= 0.2f; 
        } else {
            cout << "Dommage, tu as perdu !" << endl;
            hasloose = true;
        }

        cout << "-----------------------------" << endl;
    }
    }
    system("pause");
    return 0;
}