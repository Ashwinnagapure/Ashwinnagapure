// WAP for sum of first n natural number using recursion
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n > 0)
    {
        return n * (n + 1) / 2;
    }
}
int main()
{
    int n;
    cout << "enter the natural number :";
    cin >> n;
    cout << "the sum of n natural number is  :" << sum(n) << endl;
}