//Andrew Diggs
//Exam 2 Coding Portion

#include <iostream>
#include "Person.h"
#include "Movie.h"
#include "City.h"
#include "Itinerary.h"
using namespace std;

int main() 
{
    //1st Problem
    Person director1("Steven", "Spielberg", "1946-12-18");
    Person actor1("Harrison", "Ford", "1942-07-13");
    Person actor2("Karen", "Allen", "1951-10-05");

    vector<Person> cast1 = { actor1, actor2 };

    Movie movie1("Indiana Jones and the Raiders of the Lost Ark", director1, cast1, 115);
    cout << movie1 << "\n";

    Person director2("James", "Cameron", "1954-08-16");
    Person actor3("Leonardo", "DiCaprio", "1974-11-11");
    Person actor4("Kate", "Winslet", "1975-10-05");

    vector<Person> cast2 = { actor3, actor4 };

    Movie movie2("Titanic", director2, cast2, 195);
    cout << movie2 << "\n";

    //2nd Problem
    City city1("New York", 40.7128, -74.0060);
    City city2("Los Angeles", 34.0522, -118.2437);

    Itinerary itinerary1;
    itinerary1.addCity(city1);
    itinerary1.addCity(city2);

    City city3("Chicago", 41.8781, -87.6298);
    City city4("Houston", 29.7604, -95.3698);

    Itinerary itinerary2;
    itinerary2.addCity(city3);
    itinerary2.addCity(city4);

    Itinerary combinedItinerary = itinerary1 + itinerary2;
    cout << "Cities: " << endl;
    cout << city1.getName() << endl
        << city2.getName() << endl
        << city3.getName() << endl
        << city4.getName() << endl;

    cout << "Total distance of combined itinerary: " << combinedItinerary.getDistance() << " units\n";

    return 0;
}
