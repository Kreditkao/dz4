#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact {
public:
    virtual void show() const = 0; // Віртуальний метод для відображення повної інформації про контакт
};
