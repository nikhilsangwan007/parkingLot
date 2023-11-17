#ifndef HANDICAPPED_VEHICLE_HPP
#define HANDICAPPED_VEHICLE_HPP

#include "Vehicle.hpp"

class HandicappedVehicle: public Vehicle
{
public:
	HandicappedVehicle(string number)
	{
	    vehicleNumber = number;
	    vehicleType = "HandicappedVehicle";
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

#endif //HANDICAPPED_VEHICLE_HPP