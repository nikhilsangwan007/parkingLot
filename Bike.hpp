#ifndef BIKE_HPP
#define BIKE_HPP

#include "Vehicle.hpp"

class Bike: public Vehicle
{
public:
	Bike(string number)
	{
	    vehicleNumber = number;
	    vehicleType = "Bike";
	    isParked = false;
	}

	string getVehicleNumber() override { return this->vehicleNumber; }
	string getVehicleType() override { return this->vehicleType; }
	bool isVehicleParked() override { return this->isParked; }
	
	int getParkedTime()
	{
		if(this->isParked == false)
		{
			cout<< "Your "<<vehicleType<<" is not parked!\n";
			return 0;
		}

		return this->parkedTime;
	}

};

#endif //BIKE_HPP