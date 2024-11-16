#include "driver.h"

Driver::Driver(int did, string drivername, Location* location)
{
    this->driverID = did;
    this->name = drivername;
    this->loc = location;
}
string Driver::getCurrentLocation()
{
    return this->loc->getLocation();
}
string Driver::getName()
{
    return this->name;
}