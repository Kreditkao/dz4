#include "Friend.h"

Friend::Friend() 
{

}

Friend::Friend(const string& surname, const string& address, const string& phoneNumber, const string& birthDate)
    : surname(surname), address(address), phoneNumber(phoneNumber), birthDate(birthDate) 
{

}

string Friend::getSurname() const
{
    return surname;
}

string Friend::getAddress() const 
{
    return address; 
}

string Friend::getPhoneNumber() const 
{ 
    return phoneNumber; 
}

string Friend::getBirthDate() const 
{ 
    return birthDate; 
}

void Friend::setSurname(const string& surname)
{ 
    this->surname = surname;
}

void Friend::setAddress(const string& address)
{ 
    this->address = address; 
}

void Friend::setPhoneNumber(const string& phoneNumber)
{ 
    this->phoneNumber = phoneNumber; 
}

void Friend::setBirthDate(const string& birthDate) 
{ 
    this->birthDate = birthDate;
}

void Friend::show() const 
{
    cout << "Friend Info:\n"
        << "Surname: " << surname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phoneNumber << "\n"
        << "Birth Date: " << birthDate << "\n";
}
