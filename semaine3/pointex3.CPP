#include <iostream>

struct item ;
struct Player ;
enum class Itemtype;
enum class Hand;
enum class ItemType {
	Sword,
	Shield,
	Wand,
	Bow
};
enum class Hand
{
	Left,
	Right,
	Both,
};
struct Item
{
	ItemType type;
	int durability = 100;
	int quality = 100;
	Player *owner = nullptr;
};
struct Player
{
	char nameplayer ;
	int hp = 100;
	Item *rightHand;
	Item *leftHand;

};
void displayitem(Item &item);
void Grab(Player &playera, Item &item, Hand Hand);
void Drop(Player &player, Hand hand);
void displayplayer(Player &player) ;
int main()
{
	Item Sword ;
	Sword.type = ItemType::Sword;
	Sword.durability = 100;
	Sword.quality =100;
	Item Shield;
	Shield.type = ItemType::Shield;
	Shield.durability = 100;
	Shield.quality = 100;
	Item Wand;
	Wand.type = ItemType::Wand;
	Wand.durability = 100;
	Wand.quality = 100;
	Item Bow;
	Bow.type = ItemType::Bow;
	Bow.durability = 100;
	Bow.quality = 100;
	Player playera;
	std::cout << "donnez votre nom  : ";
	std::cin >> playera.nameplayer;
	playera.leftHand=nullptr;
	playera.rightHand=nullptr;
	Player playerb;
	std::cout << "donnez votre nom  : ";
	std::cin >> playera.nameplayer;
	playera.leftHand = nullptr;
	playera.rightHand = nullptr;
	Grab(playera,Bow,Hand::Both);
	displayitem(Bow);
	displayplayer(playera);
	Grab(playerb, Wand, Hand::Both);
	displayitem(Wand);
	displayplayer(playerb);
}
void displayitem(Item &item)
{
	std::cout << "item Type" << std::endl;
	switch (item.type)
	{
	case ItemType::Shield:
		std::cout << "shield" << std::endl;
		std::cout << "durability =" << item.durability << std::endl;
		std::cout << "Qualite =" << item.quality<<std::endl;
		break;
	case ItemType::Bow:
		std::cout << "Bow" << std::endl;
		std::cout << "durability =" << item.durability << std::endl;
		std::cout << "Qualite =" << item.quality << std::endl;
		break;
	case ItemType::Wand:
		std::cout << "wand" << std::endl;
		std::cout << "durability =" << item.durability << std::endl;
		std::cout << "Qualite =" << item.quality << std::endl;
		break;
	case ItemType::Sword:
		std::cout << "sword" << std::endl;
		std::cout << "durability =" << item.durability << std::endl;
		std::cout << "Qualite =" << item.quality << std::endl;
		break;
	}
}
void displayplayer(Player &player)
{
	std::cout << "Nom du joueur est" <<player.nameplayer<< std::endl;
	std::cout << "PV restant" << player.hp << std::endl;
	if (player.rightHand==nullptr)
	{
		std::cout << "main droite vide" <<  std::endl;
	}
	else
	{
		std::cout << "main droite tient " <<player.rightHand<< std::endl;
		displayitem(*player.leftHand);
	}
	if (player.leftHand == nullptr)
	{
		std::cout << "main gauche vide" << std::endl;
	}
	else
	{
		std::cout << "main gauche possede " << std::endl;
		displayitem(*player.rightHand);
	}
}
 void Grab (Player &player ,Item &item ,Hand hand)
{
	if (item.owner!=nullptr && item.owner != &player)
	{
		 return  ;
	}
	
	if (hand==Hand::Left)
	{
		if (player.leftHand == nullptr )
		{
			player.leftHand = &item;
			item.owner = &player;
			
		}
	}

	if (hand == Hand::Right)
	{
		if(player.rightHand == nullptr);
	{
		player.rightHand = &item;
		item.owner = &player;
	}
}
	if (hand == Hand::Both){
		if (player.rightHand == nullptr && player.leftHand == nullptr)
		{
			player.rightHand = &item;
			player.leftHand = &item;
			item.owner = &player;
		}
}

}
void Drop(Player &player, Hand hand)
{

	if (hand == Hand::Left)
	{
		if (player.leftHand != nullptr)
		{
			player.leftHand->owner = nullptr;
			player.leftHand = nullptr;
		}
	}

	if (hand == Hand::Left)
	{
		if (player.rightHand != nullptr)
			
		{
			player.rightHand->owner = nullptr;
			player.rightHand = nullptr;
			
		}
	}
	if (hand == Hand::Both)
	{
		if (player.rightHand != nullptr && player.leftHand != nullptr)
		{
			player.leftHand->owner = nullptr;
			player.rightHand->owner = nullptr;
			player.rightHand = nullptr;
			player.leftHand = nullptr;
			
		}
	}
}