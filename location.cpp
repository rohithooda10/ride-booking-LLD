#include "location.h"

Location::Location(int longi, int lat)
{
    this->longitude = longi;
    this->latitute = lat;
}
int Location::findDistance(Location* loc)
{
    return abs(loc->longitude - this->longitude + loc->latitute - this->latitute);
}
string Location::getLocation()
{
    return "("+to_string(this->longitude)+","+to_string(this->latitute)+")";
}