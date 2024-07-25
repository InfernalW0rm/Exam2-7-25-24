#include "Itinerary.h"

void Itinerary::addCity(const City& city) 
{
    cities.push_back(city);
}

vector<City> Itinerary::getCities() const 
{
    return cities;
}

double Itinerary::getDistance(const City& orig, const City& dest) 
{
    return sqrt(pow(orig.getLatitude() - dest.getLatitude(), 2) +
        pow(orig.getLongitude() - dest.getLongitude(), 2));
}

double Itinerary::getDistance() const 
{
    double totalDistance = 0.0;
    for (size_t i = 0; i < cities.size() - 1; ++i) {
        totalDistance += getDistance(cities[i], cities[i + 1]);
    }
    return totalDistance;
}

Itinerary Itinerary::operator+(const Itinerary& other) const 
{
    Itinerary combined = *this;
    combined.cities.insert(combined.cities.end(), other.cities.begin(), other.cities.end());
    return combined;
}
