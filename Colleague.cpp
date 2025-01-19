#include "Colleague.h"

Colleague::Colleague() 
{

}

Colleague::Colleague(const string& organizationName, const string& address, const string& phoneNumber, const string& fax, const string& contactPerson)
    : organizationName(organizationName), address(address), phoneNumber(phoneNumber), fax(fax), contactPerson(contactPerson)
{

}

string Colleague::getOrganizationName() const 
{ 
    return organizationName; 
}

string Colleague::getAddress() const 
{ 
    return address; 
}

string Colleague::getPhoneNumber() const 
{ 
    return phoneNumber; 
}

string Colleague::getFax() const 
{ 
    return fax; 
}

string Colleague::getContactPerson() const 
{ 
    return contactPerson; 
}


void Colleague::setOrganizationName(const string& organizationName)
{ 
    this->organizationName = organizationName;
}

void Colleague::setAddress(const string& address)
{ 
    this->address = address; 
}

void Colleague::setPhoneNumber(const string& phoneNumber) 
{ 
    this->phoneNumber = phoneNumber;
}

void Colleague::setFax(const string& fax) 
{ 
    this->fax = fax; 
}

void Colleague::setContactPerson(const string& contactPerson) 
{ 
    this->contactPerson = contactPerson; 
}

void Colleague::show() const 
{
    cout << "Colleague Info:\n"
        << "Organization Name: " << organizationName << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phoneNumber << "\n"
        << "Fax: " << fax << "\n"
        << "Contact Person: " << contactPerson << "\n";
}
