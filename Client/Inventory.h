#include "Dish.h"

//The inventory stores a Player's dishes

class Inventory
{
private:
	Dish inventory[2];
	//TODO sprite
public:
	Dish& getDish(int slot); //returns the dish in the given inventory slot
	void setDish(int slot, Dish dish); //
	bool isInventoryFull(); //returns true if inventory is full
	void addDish(Dish dish);
	void emptySlot(int slot);
	void clearInventory();
};
