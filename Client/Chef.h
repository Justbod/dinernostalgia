#include "Dish.h"
#include <list>

class Chef
{
private:
	std::string name; //name of the chef
	std::list<Dish> learnedDishList; //a vector that contains all the dishes this chef can prepare
	std::list<Dish> dishQueue; //an array that contains the dishes that this chef is preparing (index 0 first)
	bool isIdle; //returns true if this chef is not preparing a meal and viceversa
	int cookingSpeed; //return the cooking speed multiplier of this chef
public:
	std::string getName(); //returns the name of this chef
	void setName(std::string name); //sets the name of this chef

	std::list<Dish> getLearnedDishList(); //returns a vector that contains all the dishes this chef can prepare
	bool hasLearnedDish(int id); //returns true if this chef is able to prepare the input dish
	void addLearnedDish(Dish dish); //adds the input dish to the vector of dishes that this chef can prepare

	void addDishToQueue(Dish dish); //adds the input dish to array of dishes that this chef can prepare
	void removeFirstDishFromQueue(); //removes the dish first dish from the dish queue
	bool isQueueFull(); //OBSOLETE dishQueue will not have fixed max size

	bool isIdle(); //returns true if this chef is currently not preparing a dish
	void setIdle(bool idle); //set to false if chef starts preparing a meal and to false if chef is not preparing a dish anymore

	int getCookingSpeed(); //returns this chefs cooking speed multiplier
	void setCookingSpeed(int speed); //sets this chefs cooking speed multiplier
};
