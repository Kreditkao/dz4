#pragma once
#include "Contact.h"

class Friend : public Contact {
private:
    string surname;
    string address;
    string phoneNumber;
    string birthDate;

public:
    Friend();
    Friend(const string& surname, const string& address, const string& phoneNumber, const string& birthDate);

    string getSurname() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getBirthDate() const;

    void setSurname(const string& surname);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);
    void setBirthDate(const string& birthDate);

    void show() const override;
};
