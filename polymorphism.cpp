#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Calculator
{
public:
    void add(int num1, int num2, int num3)
    {
        cout << "Sum of 3 numbers " << num1 + num2 + num3 << "\n";
    }
    void add(int num1, int num2)
    {
        cout << "Sum of 2 numbers " << num1 + num2 << "\n";
    }
};
int main()
{
    Calculator c;
    c.add(1, 2, 3);
    c.add(1, 5);
}