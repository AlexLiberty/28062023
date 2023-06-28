#pragma once
#include <string>
using namespace std;

class Animals
{
protected:
    string name;

public:

    Animals(const string& petName);

    virtual void GetCharacteristics() const = 0;
    virtual void Sound() const = 0;
};
