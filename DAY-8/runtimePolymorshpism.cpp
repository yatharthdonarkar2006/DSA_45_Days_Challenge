#include <iostream>
using namespace std;

class Animal
{
public:
    void Eat()
    {
        cout << "Eating ....\n";
    }
    void Sound()
    {
        cout << "Sound ....\n";
    }
};

class Dog : public Animal
{
public:
    void Sound()
    {
        cout << "Bhaw Bhaw ....\n";
    }
};

class Cat : public Animal
{
public:
    void Sound()
    {
        cout << "Meow Meow ....\n";
    }
};

int main()
{

    Dog d1;
    d1.Sound();

    return 0;
}