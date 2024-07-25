#ifndef CITY_H
#define CITY_H

#include <string>
using namespace std;

class City 
{
private:
    string name;
    double latitude;
    double longitude;

public:
    City(const string& name, double lat, double lon);

    string getName() const;
    double getLatitude() const;
    double getLongitude() const;
};

#endif
