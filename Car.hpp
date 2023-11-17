#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"

class Car: public Vehicle
{
public:
	Car(string number)
	{
	    vehicleNumber = number;
	    vehicleType = "Car";
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

#endif //CAR_HPP