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

    /*Dog dog("Рекс","Собака", 3);*/
    //Cat cat("Мурка", 4);
    //Parrot parrot("Кеша", 100);

    //dog.GetCharacteristics();
    //dog.Sound();
    //cat.GetCharacteristics();
    //parrot.GetCharacteristics();

    Animals* dog = new Dog("Бобік", "собака", 3);
    dog->GetCharacteristics();
    dog->Sound();

    delete dog;


    return 0;
}