#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void personalDetails()
    {
        cout << "Name = " << name << ", Age = " << age << "\n";
    }
};

class Company
{
private:
    string cname, location;

public:
    Company(string cname, string location)
    {
        this->cname = cname;
        this->location = location;
    }
    void companyDetails()
    {
        cout << "Company name: " << cname << ", Location: " << location << "\n";
    }
};

class Employee : public Person, public Company
{
public:
    Employee(string name, int age, string cname, string location) : Person(name, age), Company(cname, location)
    {
    }
};

int main()
{
    Employee ep1("Mr. XYZ", 24, "W Ltd", "Mars");
    ep1.personalDetails();
    ep1.companyDetails();
}