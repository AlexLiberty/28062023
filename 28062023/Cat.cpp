#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Cat::GetCharacteristics() const
{
    cout << "�� ���� � ��'�� " << name << ". ���� �� " << age << " ����." << endl;
}

void Cat::Sound() const
{
    cout << "���" << endl;
}
