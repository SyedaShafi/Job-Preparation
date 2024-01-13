#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Parent
{
public:
    void print()
    {
        cout << "This is the function inside parent class\n";
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "This is the function inside child class\n";
    }
};

int main()
{
    Child ch;
    ch.print();
}