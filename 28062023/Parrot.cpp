#include "Parrot.h"
#include <iostream>

using namespace std;

Parrot::Parrot(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Parrot::GetCharacteristics() const
{
    cout << "Це папуга з ім'ям " << name << ". Вона має " << age << " років." << endl;
}

void Parrot::Sound() const
{
    cout << "Кар" << endl;
}
