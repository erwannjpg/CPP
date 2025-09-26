#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>

struct tableau
{
    int data[5][5];
};
int main() {
    tableau tableau;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tableau.data[i][j] = (i + j) % 2;
        }
    }
    std::cout << "Tableau contents: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << tableau.data[i][j] << " ";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << tableau.data[i][j] << " ";
        }
        std::cout << std::endl;
    }   
}