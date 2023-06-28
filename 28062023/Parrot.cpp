#include "Parrot.h"
#include <iostream>

using namespace std;

Parrot::Parrot(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Parrot::GetCharacteristics() const
{
    cout << "�� ������ � ��'�� " << name << ". ���� �� " << age << " ����." << endl;
}

void Parrot::Sound() const
{
    cout << "���" << endl;
}
