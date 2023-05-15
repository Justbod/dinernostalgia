#include "Chef.h"

//returns the name of this chef
std::string Chef::getName()
{
	return this->name;
}

//sets the name of this chef
void Chef::setName(std::string name)
{
	this->name = name;
}

//returns a vector that contains all the dishes this chef can prepare
std::list<Dish> Chef::getLearnedDishList()
{
	return this->learnedDishList;
}

//returns true if this chef is able to prepare the input dish
bool Chef::hasLearnedDish(int id)
{
	bool hasLearned = false;
	for (Dish dish : this->learnedDishList)
	{
		if (dish.Dish::getId() = id)
		{
			hasLearned = true;
		}
	}
	return hasLearned;
}

//adds the input dish to the vector of dishes that this chef can prepare
void Chef::addLearnedDish(Dish dish)
{
	this->learnedDishList.insert(this->learnedDishList.begin(), dish);
}

//a list that contains the dishes that this chef is preparing begin is first
void Chef::addDishToQueue(Dish dish)
{
	this->dishQueue.insert(this->dishQueue.end(), dish);
}

//removes the dish first dish from the dish queue
void Chef::removeFirstDishFromQueue()
{
	this->dishQueue.pop_front();
}

//returns true if this chef is currently not preparing a dish
bool Chef::isIdle()
{
	return this->isIdle;
}

//set to false if chef starts preparing a meal and to false if chef is not preparing a dish anymore
void Chef::setIdle(bool idle)
{
	this->isIdle = idle;
}

//returns this chefs cooking speed multiplier
int Chef::getCookingSpeed()
{
	return this->cookingSpeed;
}

//sets this chefs cooking speed multiplier
void Chef::setCookingSpeed(int speed)
{
	this->cookingSpeed = speed;
}