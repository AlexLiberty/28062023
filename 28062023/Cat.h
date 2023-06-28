#pragma once
#include <string>
#include "Animals.h"

using namespace std;
class Cat : public Animals
{
private:
    int age;

public:

    Cat(const string& petName, int petAge);

    void GetCharacteristics() const override;
    void Sound() const override;
};

