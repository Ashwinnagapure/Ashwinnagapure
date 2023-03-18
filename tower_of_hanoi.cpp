#include <iostream>
using namespace std;

int toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        printf("(%d,%d)\n", a, c);
        toh(n - 1, b, a, c);
    }
}

int main()
{
    int n, a, b, c;
    cout<<"enter the value of n =";
     cin>>n;
      cout<<"enter the value of a =";
     cin>>a;
      cout<<"enter the value of b =";
     cin>>b;
      cout<<"enter the value of c =";
     cin>>c;
    cout << toh(n, a, b, c);
}