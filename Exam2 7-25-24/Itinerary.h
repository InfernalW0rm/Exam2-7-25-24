#ifndef ITINERARY_H
#define ITINERARY_H

#include <vector>
#include "City.h"
#include <cmath>
using namespace std;

class Itinerary 
{
private:
    vector<City> cities;

public:
    void addCity(const City& city);
    vector<City> getCities() const;

    static double getDistance(const City& orig, const City& dest);
    double getDistance() const;

    Itinerary operator+(const Itinerary& other) const;
};

#endif
