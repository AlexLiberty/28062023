#pragma once
#include <string>
#include "Animals.h"

using namespace std;
class Parrot : public Animals
{
private:
    int age;

public:

    Parrot(const string& petName, int petAge);

    void GetCharacteristics() const override;
    void Sound() const override;
};
