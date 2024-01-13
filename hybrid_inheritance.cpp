#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class A
{
public:
    int a = 12;
};
class B : public A
{
public:
    B()
    {
        a = 1222;
    }
};
class C
{
public:
    int b;
    C()
    {
        b = 66;
    }
};
class D : public B, public C
{
public:
    void sum()
    {
        cout << "The sum is: " << a + b;
    }
};
int main()
{
    D d;
    d.sum();
} 