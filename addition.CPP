#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>
int addition(int a, int b)
{
     a = 42;
     b = 9;
    return a + b;
}
int main()
{
std::cout << "42+9: " << addition(42,9) << std::endl; // Affiche 51
}