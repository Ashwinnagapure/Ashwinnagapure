#include <iostream>
#include <math.h>
using namespace std;
/*int pow(int m, int n)
{
    if (n == 0)

        return 1;
    return pow(m, n - 1) * m;
}*/
int pow(int m, int n)
{
    if (n==0)
    {
        return 1 ;
    }
    
    if (n % 2 == 0)

        return pow(m * m, n / 2);

    return m * pow(m * m, (n - 1) / 2);
}
int main()
{
    int m, n;
    cout << "enter the number  :";
    cin >> m;
    cout << "enter the power  :";
    cin >> n;
    int r = pow(m, n);
    cout << "p=" << r;
}