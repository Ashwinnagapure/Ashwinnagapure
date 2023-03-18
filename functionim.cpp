#include <iostream>
using namespace std;

int add(int a, int b)
{

    int c;
    c = a + b;
}

int main()
{
    int x, y;
    cout << "enter the number 1 : ";
    cin >> x;
    cout << "enter the number 2 :";
    cin >> y;
    cout << "the sum of the number are :" << add(x, y);
}