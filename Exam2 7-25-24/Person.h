#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person 
{
private:
    string firstName;
    string lastName;
    string dateOfBirth;

public:
    Person(const string& first, const string& last, const string& dob);

    string getFirstName() const;
    string getLastName() const;
    string getDateOfBirth() const;
};

#endif
