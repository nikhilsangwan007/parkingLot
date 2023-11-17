#ifndef CAR_PARKING_SPACE_HPP
#define CAR_PARKING_SPACE_HPP

#include "ParkingSpace.hpp"

using namespace std;

class CarParking: public ParkingSpace
{
public:
	CarParking(int spaceNumber)
	{
		this->spaceNumber = spaceNumber;
		this->isBooked = false;
		this->vehicle = nullptr;
		this->parkingSpaceType = "CarParking";
	}

	virtual int getParkingSpaceNumber() override;
	virtual bool isParkingSpaceBooked() override;
	virtual Vehicle* getVehicleDetails() override;
	
};

#endif //CAR_PARKING_SPACE_HPP