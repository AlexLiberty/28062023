#pragma once
#include <string>
#include "Animals.h"

using namespace std;
class Dog : public Animals
{
private:
    int age;
    string type;

public:

    Dog(const string& petName, string petType, int petAge);

    void GetCharacteristics() const override;
    void Sound() const override;
};


