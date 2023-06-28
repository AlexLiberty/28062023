#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Cat::GetCharacteristics() const
{
    cout << "÷е к≥шка з ≥м'€м " << name << ". ¬она маЇ " << age << " рок≥в." << endl;
}

void Cat::Sound() const
{
    cout << "ћ€у" << endl;
}
