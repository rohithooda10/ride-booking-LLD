#include "ride.h"

Ride::Ride(Location* src, Location* dest, PaymentStrategy* paymentStrategy)
{
    source = src;
    destination = dest;
    double fare = 100;
    payment = new Payment(fare, paymentStrategy);
}
void Ride::addDriver(Driver* driver)
{
    assignedDriver = driver;
}
void Ride::track()
{
    cout<<"Current location: "<<assignedDriver->getCurrentLocation()<<endl;
}
void Ride::setDriver(Driver* driver)
{
    assignedDriver = driver;
}