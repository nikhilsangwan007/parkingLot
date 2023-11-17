#ifndef PARKING_SPACE_HPP
#define PARKING_SPACE_HPP

#include<string>
#include "Vehicle.hpp"

using namespace std;

class ParkingSpace
{
protected:
	int spaceNumber;
	bool isBooked;
	Vehicle* vehicle;
	string parkingSpaceType;
public:

	virtual int getParkingSpaceNumber() = 0;
	virtual bool isParkingSpaceBooked() = 0;
	virtual Vehicle* getVehicleDetails() = 0;
	
};

#endif //PARKING_SPACE_HPP