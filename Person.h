#pragma once
#include "Contact.h"

class Person : public Contact {
private:
    string surname;
    string address;
    string phoneNumber;

public:
    Person();
    Person(const string& surname, const string& address, const string& phoneNumber);

    string getSurname() const;
    string getAddress() const;
    string getPhoneNumber() const;

    void setSurname(const string& surname);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);

    void show() const override;
};
