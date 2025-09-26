#include <iostream> 

int i=2000 ;
int bisextile(int &annee)
{   
    
    int est_bissextile;
    if (annee % 4 == 0)
    {
        if (annee % 100 == 0)
        {
            if (annee % 400 == 0)
            {
                est_bissextile = 1;
            }
            else
            {
                est_bissextile = 0;
            }
        }
    }
    else
    {
        est_bissextile = 0;
    }
    return est_bissextile;
}
int main() {
    for ( ;i < 2030; i++) {
        if (bisextile(i))
        {
            std::cout << i << " est une annee bissextile." << std::endl;
        }
    }
    return 0;

}