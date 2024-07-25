#include "City.h"

City::City(const string& name, double lat, double lon)
    : name(name), latitude(lat), longitude(lon) {}

string City::getName() const 
{
    return name;
}

double City::getLatitude() const 
{
    return latitude;
}

double City::getLongitude() const 
{
    return longitude;
}
