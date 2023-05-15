#include "Dish.h"

//returns the ID of this dish
int& Dish::getId()
{
	return this->id;
}

//returns the name of this dish
std::string Dish::getName()
{
	return this->name;
}

//sets the name of this dish
void Dish::setName(std::string name)
{
	this->name = name;
}

//returns the time it takes to cook this dish
int Dish::getCookingTime()
{
	return this->cookingTime;
}

//sets the cooking time of the dish
void Dish::setCookingTime(int time)
{
	this->cookingTime = time;
}

//returns the amount of coins a customer pays for this dish
int Dish::getCustomerPrice()
{
	return this->customerPrice;
}

//sets the amount of coins a customer pays for this dish
void Dish::setCustomerPrice(int price)
{
	this->customerPrice = price;
}

//return the amount of time a customer takes to consume the dish
int Dish::getCustomerConsumeTime()
{
	return this->customerConsumeTime;
}

//sets the amount of time a customer takes to consume the dish
void Dish::setCustomerConsumeTime(int time)
{
	this->customerConsumeTime = time;
}