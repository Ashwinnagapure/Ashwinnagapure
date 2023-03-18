// WAP to print the factorial of a given number using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)

    {
       return 1 ;
    }
    else
    {
         return  n*factorial(n - 1);
    }
    
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
   factorial(n);
    cout << factorial(n);
}