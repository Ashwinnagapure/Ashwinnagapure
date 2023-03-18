#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n + 11));
    }
}
int main()
{
    int n;
    cout << "enter the number to be enter in the program : ";
    cin >> n;
    fun(n);
    cout << fun(n);
}