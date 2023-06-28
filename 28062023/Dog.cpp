#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(const string& petName, string petType, int petAge) : Animals(petName), type(petType), age(petAge) {}

void Dog::GetCharacteristics() const
{
    cout << "�� "<<type<<" � ��'�� " << name << ". ���� �� " << age << " ����." << endl;
}

void Dog::Sound() const
{
    cout << "������ ���� '���'" << endl;
}