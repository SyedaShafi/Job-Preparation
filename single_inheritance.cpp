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
    string intro()
    {
        cout << "I am a " << name << "\n";
    }
};

class Cat : public Animal
{
private:
    string name;

public:
    Cat(string name) : Animal(name)
    {
        this->name = name;
    }
    void sound()
    {
        cout << "Cat sound: Meooow";
    }

    friend std::ostream &operator<<(std::ostream &os, const Cat &obj)
    {
        os << "MyClass object with data: ";
        return os;
    }
};

int main()
{
    Cat c("Cat");
    cout << c << "\n";
    c.intro();
    c.sound();
}