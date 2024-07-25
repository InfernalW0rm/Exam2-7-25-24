#include "Person.h"

Person::Person(const string& first, const string& last, const string& dob)
    : firstName(first), lastName(last), dateOfBirth(dob) {}

string Person::getFirstName() const 
{
    return firstName;
}

string Person::getLastName() const 
{
    return lastName;
}

string Person::getDateOfBirth() const 
{
    return dateOfBirth;
}
