#include "ContactManager.h"

ContactManager::~ContactManager() 
{
    for (Contact* contact : contacts) 
    {
        delete contact;
    }
}

void ContactManager::addContact(Contact* contact) 
{
    contacts.push_back(contact);
}

void ContactManager::removeContact(int index) 
{
    if (index >= 0 && index < contacts.size()) 
    {
        delete contacts[index];
        contacts.erase(contacts.begin() + index);
    }
}

void ContactManager::editContact(int index, Contact* contact) 
{
    if (index >= 0 && index < contacts.size()) 
    {
        delete contacts[index];
        contacts[index] = contact;
    }
}

Contact* ContactManager::searchBySurname(const string& surname) const 
{
    for (Contact* contact : contacts) 
    {
        if (Person* person = dynamic_cast<Person*>(contact)) 
        {
            if (person->getSurname() == surname) 
            {
                return person;
            }
        }
        else if (Friend* friendContact = dynamic_cast<Friend*>(contact)) 
        {
            if (friendContact->getSurname() == surname) 
            {
                return friendContact;
            }
        }
    }
    return nullptr;
}

void ContactManager::showAllContacts() const 
{
    for (const Contact* contact : contacts) 
    {
        contact->show();
        cout << "----------------------\n";
    }
}
