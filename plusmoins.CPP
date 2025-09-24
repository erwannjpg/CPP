#include <iostream>
#include <cstdlib>
#include <ctime>
struct AIdata {
    int Maxborne = 100;
    int Minborne = 1;
    bool aiEnabled = false;
    int difficultyLevel;
    int i = 0;
};
struct tableau_reussite
{
    int essais = 0;
    int valeurTrouvee = 0;
    int historique[100]; // tableau pour stocker les valeurs essayées
};


AIdata aiData;
int CompareAndDisplay(int value, int valueToFind) {
    if (value < valueToFind) {
        std::cout << "Plus" << std::endl;
        return 1;
    } else if (value > valueToFind) {
        std::cout << "Minus" << std::endl;
        return -1;
    } else {
        std::cout << "Equal" << std::endl;
        return 0;
    }
}

int IAWORK(int value, int valueToFind) {
    if (value < valueToFind) {
        std::cout << "Plus" << std::endl;
        return 1;
    } else if (value > valueToFind) {
        std::cout << "Minus" << std::endl;
        return -1;
    } else {
        std::cout << "Equal" << std::endl;
        return 0;
    }
}

int AI_UpdateBounds(int value, int &minBorne, int &maxBorne, int result) {
    if (result < 0) {
        aiData.Maxborne = value ;
    } else if (result > 0) {
        aiData.Minborne = value ;
    }
     return rand() % (aiData.Maxborne + aiData.Minborne) * (1.0f - aiData.difficultyLevel / 10.0f);
}
int AI_GetNextGuess() {
    int guess = (aiData.Maxborne + aiData.Minborne) / 2;
    int trybrain = guess + (std::rand() % 3 - 1) * (1.0f - aiData.difficultyLevel / 10.0f) * (aiData.Maxborne - aiData.Minborne) / 4;
    if (trybrain >= aiData.Minborne && trybrain <= aiData.Maxborne)
        guess = trybrain;
    std::cout << "L'IA choisit " << guess << std::endl;
    return guess;
}
int main() {
    tableau_reussite tableau;
    int maxValue = 100;
    int valueToFind = std::rand() % (maxValue + 1);
    int playerInput;
    int essais = 0;
    int ValueIA;
    std::cout << "Bienvenue dans le jeu du Plus ou Moins !" << std::endl;
    char useAI;
    std::cout << "Voulez-vous que l'IA joue ? (y/n) : ";
    std::cin >> useAI;
    aiData.aiEnabled = (useAI == 'y');
    int result;
    if (aiData.aiEnabled) {
        for (aiData.i = 0; aiData.i < 100; aiData.i++) {
           if (aiData.i == 0) {
            aiData.difficultyLevel=1;
           }
           else if (aiData.i == 10) {
            aiData.difficultyLevel=2;
           }
           else if (aiData.i == 20) {
            aiData.difficultyLevel=3;
           }
           else if (aiData.i == 30) {
            aiData.difficultyLevel=4;
           }
           else if (aiData.i == 40) {
            aiData.difficultyLevel=5;
           }
           else if (aiData.i == 50) {
            aiData.difficultyLevel=6;
           }
           else if (aiData.i == 60) {
            aiData.difficultyLevel=7;
           }
           else if (aiData.i == 70) {
            aiData.difficultyLevel=8;
           }
           else if (aiData.i == 80) {
            aiData.difficultyLevel=9;
           }
           else if (aiData.i == 900) {
            aiData.difficultyLevel=10;
              }
        
         
        do {
            ValueIA = AI_GetNextGuess();
            essais++;
            result = IAWORK(ValueIA, valueToFind);
            AI_UpdateBounds(ValueIA, aiData.Minborne, aiData.Maxborne, result);
        } while (result != 0);
        tableau.historique[aiData.i] = essais;
        aiData.i++;
        
    }
    std::cout << "au niveau 1 elle a trouvée en " << tableau.historique[0] <<  " ,"<<  tableau.historique[1] <<  " ,"<< tableau.historique[2] <<  " ,"<< tableau.historique[3]  <<  " ,"<< tableau.historique[4] <<  " ,"<< tableau.historique[5] <<  " ,"<< tableau.historique[6] <<  " ,"<< tableau.historique[7] <<  " ,"<< tableau.historique[8] <<  " ,"<< tableau.historique[9] <<  " essais." << std::endl;
    std::cout << "au niveau 2 elle a trouvée en " << tableau.historique[10] <<  " ,"<<  tableau.historique[11] <<  " ,"<< tableau.historique[12] <<  " ,"<< tableau.historique[13]  <<  " ,"<< tableau.historique[14] <<  " ,"<< tableau.historique[15] <<  " ,"<< tableau.historique[16] <<  " ,"<< tableau.historique[17] <<  " ,"<< tableau.historique[18] <<  " ,"<< tableau.historique[19] <<  " essais." << std::endl;
    std::cout << "au niveau 3 elle a trouvée en " << tableau.historique[20] <<  " ,"<<  tableau.historique[21] <<  " ,"<< tableau.historique[22] <<  " ,"<< tableau.historique[23]  <<  " ,"<< tableau.historique[24] <<  " ,"<< tableau.historique[25] <<  " ,"<< tableau.historique[26] <<  " ,"<< tableau.historique[27] <<  " ,"<< tableau.historique[28] <<  " ,"<< tableau.historique[29] <<  " essais." << std::endl;
    std::cout << "au niveau 4 elle a trouvée en " << tableau.historique[30] <<  " ,"<<  tableau.historique[31] <<  " ,"<< tableau.historique[32] <<  " ,"<< tableau.historique[33]  <<  " ,"<< tableau.historique[34] <<  " ,"<< tableau.historique[35] <<  " ,"<< tableau.historique[36] <<  " ,"<< tableau.historique[37] <<  " ,"<< tableau.historique[38] <<  " ,"<< tableau.historique[39] <<  " essais." << std::endl;
    std::cout << "au niveau 5 elle a trouvée en " << tableau.historique[40] <<  " ,"<<  tableau.historique[41] <<  " ,"<< tableau.historique[42] <<  " ,"<< tableau.historique[43]  <<  " ,"<< tableau.historique[44] <<  " ,"<< tableau.historique[45] <<  " ,"<< tableau.historique[46] <<  " ,"<< tableau.historique[47] <<  " ,"<< tableau.historique[48] <<  " ,"<< tableau.historique[49] <<  " essais." << std::endl;
    std::cout << "au niveau 6 elle a trouvée en " << tableau.historique[50] <<  " ,"<<  tableau.historique[51] <<  " ,"<< tableau.historique[52] <<  " ,"<< tableau.historique[53]  <<  " ,"<< tableau.historique[54] <<  " ,"<< tableau.historique[55] <<  " ,"<< tableau.historique[56] <<  " ,"<< tableau.historique[57] <<  " ,"<< tableau.historique[58] <<  " ,"<< tableau.historique[59] <<  " essais." << std::endl;
    std::cout << "au niveau 7 elle a trouvée en " << tableau.historique[60] <<  " ,"<<  tableau.historique[61] <<  " ,"<< tableau.historique[62] <<  " ,"<< tableau.historique[63]  <<  " ,"<< tableau.historique[64] <<  " ,"<< tableau.historique[65] <<  " ,"<< tableau.historique[66] <<  " ,"<< tableau.historique[67] <<  " ,"<< tableau.historique[68] <<  " ,"<< tableau.historique[69] <<  " essais." << std::endl;
    std::cout << "au niveau 8 elle a trouvée en " << tableau.historique[70] <<  " ,"<<  tableau.historique[71] <<  " ,"<< tableau.historique[72] <<  " ,"<< tableau.historique[73]  <<  " ,"<< tableau.historique[74] <<  " ,"<< tableau.historique[75] <<  " ,"<< tableau.historique[76] <<  " ,"<< tableau.historique[77] <<  " ,"<< tableau.historique[78] <<  " ,"<< tableau.historique[79] <<  " essais." << std::endl;
    std::cout << "au niveau 9 elle a trouvée en " << tableau.historique[80] <<  " ,"<<  tableau.historique[81] <<  " ,"<< tableau.historique[82] <<  " ,"<< tableau.historique[83]  <<  " ,"<< tableau.historique[84] <<  " ,"<< tableau.historique[85] <<  " ,"<< tableau.historique[86] <<  " ,"<< tableau.historique[87] <<  " ,"<< tableau.historique[88] <<  " ,"<< tableau.historique[89] <<  " essais." << std::endl;
    std::cout << "au niveau 10 elle a trouvée en " << tableau.historique[90] <<  " ,"<<  tableau.historique[91] <<  " ,"<< tableau.historique[92] <<  " ,"<< tableau.historique[93]  <<  " ,"<< tableau.historique[94] <<  " ,"<< tableau.historique[95] <<  " ,"<< tableau.historique[96] <<  " ,"<< tableau.historique[97] <<  " ,"<< tableau.historique[98] <<  " ,"<< tableau.historique[99] <<  " essais." << std::endl;
    }else {
        do {
            std::cout << "Entrez votre proposition (entre 0 et " << maxValue << ") : ";
            std::cin >> playerInput;
            essais++;
            result = CompareAndDisplay(playerInput, valueToFind);
        } while (result != 0);
    }

    std::cout << "Bravo ! Vous avez trouve en " << essais << " essais." << std::endl;
    return 0;
}