#include "Inventory.h"

class Player
{
private:
	int x;
	int y;
	//CurrentAction
	bool isIdle;
	Inventory inventory;
	//Speed
	//Skates

public:
	//TODO location getters & setters
	bool isIdle();
	Inventory getInventory();
	//TODO speed getters & setters
};
