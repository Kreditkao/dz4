#include <iostream>
#include "ContactManager.h"

using namespace std;

void showMenu() 
{
    cout << "1. Add Contact\n";
    cout << "2. Remove Contact\n";
    cout << "3. Edit Contact\n";
    cout << "4. Search Contact by Surname\n";
    cout << "5. Show All Contacts\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    ContactManager manager;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int type;
            cout << "Choose contact type (1 - Person, 2 - Colleague, 3 - Friend): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string surname, address, phoneNumber;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);

                Person* person = new Person(surname, address, phoneNumber);
                manager.addContact(person);
            }
            else if (type == 2) {
                string organizationName, address, phoneNumber, fax, contactPerson;
                cout << "Enter organization name: ";
                getline(cin, organizationName);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter fax: ";
                getline(cin, fax);
                cout << "Enter contact person: ";
                getline(cin, contactPerson);

                Colleague* colleague = new Colleague(organizationName, address, phoneNumber, fax, contactPerson);
                manager.addContact(colleague);
            }
            else if (type == 3) {
                string surname, address, phoneNumber, birthDate;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter birth date: ";
                getline(cin, birthDate);

                Friend* friendContact = new Friend(surname, address, phoneNumber, birthDate);
                manager.addContact(friendContact);
            }
            break;
        }
        case 2: {
            int index;
            cout << "Enter the index of the contact to remove: ";
            cin >> index;
            manager.removeContact(index);
            break;
        }
        case 3: {
            int index, type;
            cout << "Enter the index of the contact to edit: ";
            cin >> index;
            cin.ignore();

            cout << "Choose contact type (1 - Person, 2 - Colleague, 3 - Friend): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string surname, address, phoneNumber;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);

                Person* person = new Person(surname, address, phoneNumber);
                manager.editContact(index, person);
            }
            else if (type == 2) {
                string organizationName, address, phoneNumber, fax, contactPerson;
                cout << "Enter organization name: ";
                getline(cin, organizationName);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter fax: ";
                getline(cin, fax);
                cout << "Enter contact person: ";
                getline(cin, contactPerson);

                Colleague* colleague = new Colleague(organizationName, address, phoneNumber, fax, contactPerson);
                manager.editContact(index, colleague);
            }
            else if (type == 3) {
                string surname, address, phoneNumber, birthDate;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter birth date: ";
                getline(cin, birthDate);

                Friend* friendContact = new Friend(surname, address, phoneNumber, birthDate);
                manager.editContact(index, friendContact);
            }
            break;
        }
        case 4: {
            string surname;
            cout << "Enter surname to search: ";
            cin.ignore();
            getline(cin, surname);

            Contact* contact = manager.searchBySurname(surname);
            if (contact) {
                contact->show();
            }
            else {
                cout << "No contact found with surname: " << surname << "\n";
            }
            break;
        }
        case 5: {
            manager.showAllContacts();
            break;
        }
        case 6: {
            cout << "Exiting...\n";
            return 0;
        }
        default: {
            cout << "Invalid option. Please try again.\n";
        }
        }
    }

    return 0;
}
