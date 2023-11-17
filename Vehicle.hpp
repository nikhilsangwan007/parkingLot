#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include<string>

using namespace std;

class Vehicle
{
protected:
	string vehicleNumber;
	string vehicleType;
	bool isParked;
	int parkedTime;
public:
	virtual string getVehicleNumber() = 0;
	virtual string getVehicleType() = 0;
	virtual bool isVehicleParked() = 0;
	virtual int getParkedTime() = 0;
	// ~Vehicle();
	
};

#endif //VEHICLE_HPP