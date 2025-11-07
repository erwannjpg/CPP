#include <iostream>
enum class ItemType
{
	Sword,
	Shield,
	Wand,
	Bow 
};
struct  Item 
{
   ItemType type  ;
   int durability =100 ;
   int quality = 100 ;
};

void main ()
{
	int *Sword ;
	int *Shield ;
	int *Wand;
    int *Bow;
}
void displayitem (Item &item)
{
	std::cout <<"item Type";
	switch (item.type)
	{
	case ItemType::Shield:
		std::cout<<"shield";
		break;
	case ItemType::Bow:
		std::cout << "Bow";
		break;
	case ItemType::Wand:
		std::cout << "wand";
		break;
	case ItemType::Sword:
		std::cout << "sword";
		break;
	}
}

