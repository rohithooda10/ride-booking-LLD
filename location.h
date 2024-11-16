#pragma once
#include "header.h"
class Location {
    int longitude;
    int latitute;
public:
    Location(int longi, int lat);
    int findDistance(Location* loc);
    string getLocation();
};