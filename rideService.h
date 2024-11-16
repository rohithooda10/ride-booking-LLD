#pragma once
#include "header.h"
#include "location.h"
#include "driver.h"
#include "paymentService.h"
#include "ride.h"

class RideService {
    vector<Driver*> drivers;
public:
    void addDriver(Driver* driver);
    Ride* requestRide(Location* src, Location* dest, PaymentStrategy* paymentStrategy);
    void assignDriver(Ride* ride);
    void startRide(Ride* ride);
    void completeRide(Ride* ride);
};
