#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        fun(n-1);
        printf("%d\n", n);
       // fun(n - 1);
    }
}
int main()
{
    int x;
    cout << "enter the number :";
    cin >> x;
    fun(x);
}