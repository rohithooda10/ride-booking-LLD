#pragma once
#include "header.h"
#include "location.h"

class Driver {
    int driverID;
    string name;
    Location* loc;
public:
    Driver(int did, string drivername, Location* location);
    string getCurrentLocation();
    string getName();
};