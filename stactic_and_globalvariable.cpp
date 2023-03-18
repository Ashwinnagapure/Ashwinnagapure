#include <iostream>
using namespace std;
// int x=0; global variable
int fun(int n)
{
    static int x = 0; // static variable
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a;
    cout << "enter the number : ";
    cin >> a;
    cout << "the number is : " << fun(a);
}