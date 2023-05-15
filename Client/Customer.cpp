#include "Dish.h"

//KEEP IN MIND TO ACCOUNT FOR Single or Double customers

class Customer
{
private:
	int id; //the ID of this customer
	//TODO renderobject
	int patienceLevel; //the amount of patience this customer has left (0 means customer will instantly leave restaurant)
	Dish requestedDish; //the dish this customer will request
	bool isReadyToOrder; //OBSOLETE
	bool isEating; //OBSOLETE
	CustomerState customerState;
public:
	int getPatienceLevel();
	void setPatienceLevel(int level);

	bool isCustomerReadyToOrder(); //OBSOLETE
	void setCustomerReadyToOrder(bool value); //OBSOLETE

	bool isCustomerEating(); //OBSOLETE
	void setCustomerEating(bool value); //OBSOLETE

	CustomerState getCustomerState();
	void setCustomerState(CustomerState state);
};

enum CustomerState
{
	WAITING_SEAT, //customer is standing still in queue (waiting to be seated)
	WALKING_SEAT, //PATIENCE SHOULD NOT DECAY customer is assigned seat but has not reached seat yet
	PICKING_DISH, //PATIENCE SHOULD NOT DECAY customer is seated but has not decided dish yet
	WAITING_ORDER, //customer has decided dish but the dish has not been registered yet
	WAITING_FOOD, //cusotmer has order dish and is waiting for the dish
	LEAVING //CUSTOMER WILL LEAVE IF PATIENCE LEVEL <= 0 OR CUSTOMER WILL LEAVE IF MEAL IS FINISHED
};
