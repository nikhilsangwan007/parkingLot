#ifndef PARKING_MANAGER_HPP
#define PARKING_MANAGER_HPP

#include<vector>

#include "ParkingCalculator.hpp" /* TODO */
#include "ParkingSpace.hpp"
#include "PaymentReciept.hpp" /* TODO */

class ParkingManager
{
private:
	static ParkingManager* instance;
	vector<ParkingSpace*> parkingSpaceList;
	PaymentCalculator *calculateStatergy;

	ParkingManager()
	{
		//create a bunch of parking space for car, bike and handicapped vehicles.
	}

	/*
		intput: parkingLot
		output: Full reciept of the transaction

		NOTE: this function will be called by internal functions only.
	*/
	PaymentReciept* getPaymentReciept(int);

	/*
		this method is for root access.
	*/
	void manageParkingLot();

public:
	static ParkingManager* getParkingManagerInstance()
	{
		if(instance == nullptr)
		{
			instance = new ParkingManager();
		}

		return instance;
	}

	/*
		return value will be parkingLot Number
	*/
	int parkVehicle(Vehicle*);

	/*
		input: parkingLot Number
		output: total parking time till call made
	*/
	int getParkedTime(int);

	/*
		input: vehicle type
		output: parking cost per hour per vehicle
	*/
	int getParkingCost(string);

	/*
		input: parkingLot Number.
		output: total amout to pay.

		NOTE: calling this function will checkout the vehicle and 
				make the parking space available for next vehicle.
	*/
	int checkoutVehicle(int);

	/*
		input: Vehicle type
		output: is any parking lot available for parking
	*/
	bool checkAvailability(string);
	
};

ParkingManager::instance = nullptr;

#endif //PARKING_MANAGER_HPP