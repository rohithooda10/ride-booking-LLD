#pragma once
#include "header.h"
#include "user.h"
#include "rideService.h"
#include "utils.h"
#include "paypalStrategy.h"

int main()
{
    User* user1 = new User(1, "Rohit");
    User* user2 = new User(2, "Ravi");
    
    Location* driver1loc = new Location(1, 2);
    Location* driver2loc = new Location(10, 40);
    Driver* driver1 = new Driver(1, "Hooda", driver1loc);
    Driver* driver2 = new Driver(2, "Singh", driver2loc);
    
    RideService* rideService = new RideService();
    rideService->addDriver(driver1);
    rideService->addDriver(driver2);
    
    Location* src = new Location(10, 20);
    Location* dest = new Location(20, 100);
    
    PaymentStrategy* paymentStrategy = new Paypal();
    PaymentService* paymentService = new PaymentService();

    // Request booking
    Ride* ride = rideService->requestRide(src, dest, paymentStrategy);
    rideService->assignDriver(ride);

    rideService->startRide(ride);
    cout<<"Ride Status: "<<statusToString(ride->status)<<endl;
    ride->track();
    ride->track();
    rideService->completeRide(ride);
    cout<<"Ride Status: "<<statusToString(ride->status)<<endl;

    // Payment
    cout<<"Payment Status: "<<paymentStatusToString(ride->payment->status)<<endl;
    paymentService->processPayment(ride->payment);
    cout<<"Payment Status: "<<paymentStatusToString(ride->payment->status)<<endl;
    cout<<statusToString(ride->status)<<endl;

    return 0;
}