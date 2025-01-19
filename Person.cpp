#include "Person.h"

Person::Person() 
{

}

Person::Person(const string& surname, const string& address, const string& phoneNumber)
    : surname(surname), address(address), phoneNumber(phoneNumber) 
{

}

string Person::getSurname() const 
{ 
    return surname; 
}

string Person::getAddress() const 
{ 
    return address; 
}

string Person::getPhoneNumber() const 
{ 
    return phoneNumber; 
}

void Person::setSurname(const string& surname) 
{
    this->surname = surname; 
}

void Person::setAddress(const string& address) 
{ 
    this->address = address; 
}

void Person::setPhoneNumber(const string& phoneNumber)
{
    this->phoneNumber = phoneNumber; 
}

void Person::show() const 
{
    cout << "Person Info:\n"
        << "Surname: " << surname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phoneNumber << "\n";
}
