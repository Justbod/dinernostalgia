#include <string>

class Dish
{
private:
	int id;
	std::string name; //the name of this dish
	int cookingTime; //the amount of time it takes the chef to prepare this dish
	int customerPrice; //the amount of coins a customer pays for this dish
	int customerConsumeTime; //the time it takes a customer to consume this dish
public:
	Dish(int id, std::string name) //Constructor every dish should have an ID & name
	{
		this->id = id;
		this->name = name;
	} // use initializer list 

	int& getId(); //returns the ID of this dish

	std::string getName(); //returns the name of this dish
	void setName(std::string name); //sets the name of this dish

	int getCookingTime(); //returns the time it takes to cook this dish
	void setCookingTime(int time); //sets the cooking time of the dish

	int getCustomerPrice(); //returns the amount of coins a customer pays for this dish
	void setCustomerPrice(int price); //sets the amount of coins a customer pays for this dish

	int getCustomerConsumeTime(); //return the amount of time a customer takes to consume the dish
	void setCustomerConsumeTime(int time); //sets the amount of time a customer takes to consume the dish
};
