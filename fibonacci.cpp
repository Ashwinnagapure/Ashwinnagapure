#include <iostream>
using namespace std;

// simple function
int fib1(int n)
{
    if (n <= 1)
        return n;
    else
        return fib1(n - 2) + fib1(n - 1);
}
// iterative function
int fib2(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (i = 1; i < n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
}

// memoization
int f[10];
int fib3(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
            f[n - 2] = fib3(n - 2);
        if (f[n - 1] == -1)
            f[n - 1] = fib3(n - 1);
        f[n] = f[n - 2] + f[n - 1];
        return f[n - 2] + f[n - 1];
    }
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    cout << fib1(n) << endl;
    cout << fib2(n) << endl;
    cout << fib3(n) << endl;
}