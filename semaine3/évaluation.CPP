#include <iostream>
/* a vaut 3
b vaut 4
c vaut 0
D vaut 150
e vaut false
f vaut true
g vaut false
h vaut 0
Tab[2] faut 3
S affiche 13*/
struct tableau
{
	int variables[10];
};
int attack(std::string atk, int puissance, std::string def) ;
int main()
{
	std::string names[4] = {"Pikatchu", "Carapuce", "Salameche", "monaflemite"};
	std::string types[4] = {"electric", "water", "fire", "normal"};
	int powers[4] = {100, 40, 60, 200};
	int somme =0 ;
	int i = 0;
	tableau tableau;
	for (int v = 0; v < 10; v++)
	{
		tableau.variables[v] = v ;
	}
	std::cout << "Tableau contents: ";
	for (int v = 0; v < 10; v++)
	{
		std::cout << tableau.variables[v] << " ";
	}
	std::cout << std::endl;
	while (somme < 100)
	{
		i++;
		somme =i+somme;
		std::cout << somme << " ";
	}
	int ab = abs(-7);
	std::cout << ab <<std::endl;
	std::cout <<names[0]<<" inflige " << attack(types[0],powers[0],types[1])<<names[1] ;
}
int abs (int valeur)
{
	if(valeur <0)
	{
	   return valeur * -1;
	}
	return valeur;
}
int attack(std::string atk, int puissance, std::string def)
{
 if (atk == "electrik" )
	{
	if (def == "water")
	{
		std::cout <<"foudre dans l'eau";
	    return puissance * 2 ;
	}
	else
	{
		return puissance;
	}
}
	if (atk == "water")
	{
		if (def == "fire")
		{
			return puissance * 2;
		}
		else
		{
			return puissance;
		}
	}
	if (atk == "fire")
	{
		if (def == "water")
		{
			return puissance / 2;
		}
		else
		{
			return puissance;
		}
	}
	return 200;
}
