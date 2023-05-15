#include "Inventory.h"

//returns the dish in the given inventory slot
Dish& Inventory::getDish(int slot) 
{
	return this->inventory[slot];
}

void Inventory::setDish(int slot, Dish dish)
{
	this->inventory[slot] = dish;
}

bool Inventory::isInventoryFull()
{
	//TODO
}

void Inventory::addDish(Dish dish)
{
	//TODO
}

void Inventory::emptySlot(int slot)
{
	//TODO
}

void Inventory::clearInventory()
{
	//TODO
}