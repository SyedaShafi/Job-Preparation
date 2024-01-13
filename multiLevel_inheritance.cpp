#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class GrandParent
{
public:
    void property()
    {
        cout << "I have 5 tk\n";
    }
};

class Parent : public GrandParent
{
public:
    void property()
    {
        cout << "I have 3 taka\n";
    }
    void father_property()
    {
        GrandParent::property();
    }
};

class Child : public Parent
{
public:
    void property()
    {
        cout << "I have 2 tk\n";
    }
    void father_property()
    {
        Parent::property();
    }
    void grandfather_property()
    {
        Parent::father_property();
    }
};
int main()
{
    Child ch;
    ch.property();
    ch.father_property();
    ch.grandfather_property();
}