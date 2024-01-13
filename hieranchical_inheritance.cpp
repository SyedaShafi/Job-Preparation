#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Animal
{
private:
    string name;

public:
    Animal(string name)
    {
        this->name = name;
    }
    void intro()
    {
        cout << "I am a " << name << "\n";
    }
};

class Cat : public Animal
{
public:
    Cat(string name) : Animal(name)
    {
    }

    void sound()
    {
        cout << "Cat sound: meoow\n";
    }
};

class Dog : public Animal
{
public:
    Dog(string name) : Animal(name)
    {
    }
    void sound()
    {
        cout << "Dog sound: bark";
    }
};

int main()
{
    Cat c("Cat");
    c.intro();
    c.sound();

    Dog d("Dog");
    d.intro();
    d.sound();
}