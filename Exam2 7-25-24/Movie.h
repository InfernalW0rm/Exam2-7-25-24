#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <vector>
#include "Person.h"
using namespace std;

class Movie 
{
private:
    string name;
    Person director;
    vector<Person> cast;
    int runtime;

public:
    Movie(const string& name, const Person& director, const vector<Person>& cast, int runtime);

    static bool isLongMovie(int min);

    friend ostream& operator<<(ostream& strm, const Movie& movie);
};

#endif
