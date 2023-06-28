#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(const string& petName, string petType, int petAge) : Animals(petName), type(petType), age(petAge) {}

void Dog::GetCharacteristics() const
{
    cout << "Це "<<type<<" з ім'ям " << name << ". Вона має " << age << " років." << endl;
}

void Dog::Sound() const
{
    cout << "собака каже 'ГАВ'" << endl;
}