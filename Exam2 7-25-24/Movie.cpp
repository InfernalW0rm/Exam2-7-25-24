#include "Movie.h"
#include <iostream>

Movie::Movie(const string& name, const Person& director, const vector<Person>& cast, int runtime)
    : name(name), director(director), cast(cast), runtime(runtime) {}

bool Movie::isLongMovie(int min) 
{
    return min > 135;
}

ostream& operator<<(ostream& strm, const Movie& movie) 
{
    strm << "Movie Name: " << movie.name << "\n";
    strm << "Director: " << movie.director.getFirstName() << " " << movie.director.getLastName() << "\n";
    strm << "Runtime: " << movie.runtime << " minutes\n";
    strm << "Cast:\n";
    for (const auto& actor : movie.cast) 
    {
        strm << "  " << actor.getFirstName() << " " << actor.getLastName() << "\n";
    }
    return strm;
}
