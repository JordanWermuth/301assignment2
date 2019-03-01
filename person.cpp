#include <iostream>
#include "person.h"
using namespace std;

Person::Person()
    {

    }

void Person::setLastName(string lName)
    {
        this->lastName = lName;
    }

string Person::getLastName()
    {
        return lastName;
    }

void Person::setFirstName(string fName)
    {
        this->firstName = fName;
    }

string Person::getFirstName()
    {
        return firstName;
    }

void Person::setPayRate(float rate)
    {
        this->payRate = rate;
    }

float Person::getPayRate()
    {
        return payRate;
    }

void Person::setHoursWorked(float hours)
    {
        this->hoursWorked = hours;
    }

float Person::getHoursWorked()
    {
        return hoursWorked;
    }

float Person::totalPay()
    {
        return hoursWorked * payRate;
    }

string Person::fullName()
    {
        return firstName + " " + lastName;
    }
