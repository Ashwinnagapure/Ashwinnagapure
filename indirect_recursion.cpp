#include <iostream>
using namespace std;
int funB(int n);
int funA(int n)
{
    if (n > 0)
    {
        cout << n;
        funB(n - 1);
    }
}
int funB(int n)
{
    if (n > 0)
    {
        cout << n;
        funA(n / 2);
    }
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    funA(n);
    //funB(n);
}
