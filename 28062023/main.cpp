#include "Animals.h"
#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "parrot.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*Dog dog("����","������", 3);*/
    //Cat cat("�����", 4);
    //Parrot parrot("����", 100);

    //dog.GetCharacteristics();
    //dog.Sound();
    //cat.GetCharacteristics();
    //parrot.GetCharacteristics();

    Animals* dog = new Dog("����", "������", 3);
    dog->GetCharacteristics();
    dog->Sound();

    delete dog;


    return 0;
}