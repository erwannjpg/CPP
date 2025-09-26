#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>

struct tableau
{
    int data[5];
};
int main() {
    tableau tableau;
    for (int i = 0; i < 5; i++) {
        tableau.data[i] = i * i;
    }
    std::cout << "Tableau contents: ";
    for (int i = 0; i < 5; i++) {
    std::cout << tableau.data[i] << " ";
}
std::cout << std::endl;
}