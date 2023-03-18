#include <iostream>
using namespace std;
// normal function using factorial

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int c(int n, int r)
{
    int t1, t2;
    t1 = factorial(n);
    t2 = factorial(r) * factorial(n - r);

    return t1 / t2;
}
// Directly recursively
int c2(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return c2(n - 1, r - 1) + c2(n - 1, r);
    }
}
int main()
{
    int n, r;

    cout << "enter the value of n = ";
    cin >> n;
    cout << "enter the value of r = ";
    cin >> r;
    cout << factorial(n) << endl;
    cout << c(n, r) << endl;
    cout << "for secount " << c2(n, r);
}
