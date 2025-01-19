#pragma once
#include <vector>
#include "Contact.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

class ContactManager {
private:
    vector<Contact*> contacts;

public:
    ~ContactManager();

    void addContact(Contact* contact);
    void removeContact(int index);
    void editContact(int index, Contact* contact);
    Contact* searchBySurname(const string& surname) const;

    void showAllContacts() const;
};
