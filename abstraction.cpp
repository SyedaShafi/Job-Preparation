#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
// we can't make object of class having virtual abstract method
// these classes are created to be inherited by child class
class Project
{
public:
    int balance = 50;
    void details()
    {
        cout << "Total Balance: " << balance << "\n";
    }
    // virtual method have to be defined in its child classes
    // otherwise object can't be created
    virtual void security() = 0;
};

class App : public Project
{
public:
    // method overriding
    // void details()
    // {
    //     cout << "I am inside the App class\n";
    // }
    void security()
    {
        cout << "This is the virtual function defined inside app class inherited from project class\n";
    }
};
int main()
{
    // Project *p1 = new Project(); // it will through an error
    App *ap1 = new App();
    cout << ap1->balance << "\n";
    ap1->details();
    ap1->security();
}