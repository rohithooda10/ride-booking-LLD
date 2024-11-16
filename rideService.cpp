#include "rideService.h"

void RideService::addDriver(Driver* driver)
{
    drivers.push_back(driver);
}
Ride* RideService::requestRide(Location* src, Location* dest, PaymentStrategy* paymentStrategy)
{
    if(src->getLocation() == dest->getLocation())
        return NULL;
    Ride* ride = new Ride(src, dest, paymentStrategy);
    ride->payment->status = PaymentStatus::PENDING;
    return ride;
}
void RideService::assignDriver(Ride* ride)
{
    for(auto &driver: drivers)
    {
        cout<<"Checked driver "<<driver->getName()<<endl;
    }
    ride->setDriver(drivers.back());
    cout<<"Assigned driver:"<<drivers.back()<<endl;
    ride->status = Status::ASSIGNEDDRIVER;
}
void RideService::startRide(Ride* ride)
{
    ride->status = Status::STARTED;
}
void RideService::completeRide(Ride* ride)
{
    ride->status = Status::COMPLETED;
}