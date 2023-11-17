#include "CarParking.hpp"

using namespace std;

int CarParking::getParkingSpaceNumber()
{
	return this->spaceNumber;
}

bool CarParking::isParkingSpaceBooked()
{
	return this->isBooked;
}

Vehicle* CarParking::getVehicleDetails()
{
	return this->vehicle;
}