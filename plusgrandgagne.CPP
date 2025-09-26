#include <iostream>


int max(int a, int b) 
{ 
    a=42;
    b=66;
    if (a > b)
        return a;
    else
        return b;

}
int minimum(int a, int b) 
{ 
    a=42;
    b=66;
    if (a < b)
        return a;
    else
        return b;

}
int main()
{
std::cout << "max(42,66): " << max(42,66) << std::endl; 
std::cout << "min(42,66): " << minimum(42,66) << std::endl;
}
