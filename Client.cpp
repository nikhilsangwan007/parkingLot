#include<iostream>

#include "Car.hpp"
#include "ParkingSpace.hpp"
#include "CarParking.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	CarParking *carParking_1 = new CarParking(1);
	Car *car_1 = new Car("DL 9675");

	cout<<carParking_1->getParkingSpaceNumber()<<endl;
	return 0;
}