#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
    // the name and id variables are private data we can't access them outside the current class
    // but we can access these data by using public methods within the class
    
    string name;
    int id;

public:
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void details()
    {
        cout << "Name: " << name << " ID: " << id << "\n";
    }
};

int main()
{
    Student *std = new Student("XYZ", 100);
    std->details();
}
