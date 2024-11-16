#pragma once
#include "header.h"
#include "location.h"
#include "paymentStrategy.h"
#include "driver.h"
#include "user.h"
#include "payment.h"

enum Status {
    ASSIGNEDDRIVER,
    STARTED,
    COMPLETED
};

class Ride {
    string rid;
    Driver* assignedDriver;
    User* user;
    Location* source;
    Location* destination;
    
public:
    Status status;
    Payment* payment;
    Ride(Location* src, Location* dest, PaymentStrategy* paymentStrategy);
    void addDriver(Driver* driver);
    void track();
    void setDriver(Driver* driver);
};