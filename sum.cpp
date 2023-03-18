#include <iostream>
using namespace std;
int sum2(int a[], int n) // recursive version
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        return sum2(a, n - 1) + a[n];
    }
}
int sum1(int a[], int n) // iterative version
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n;
    int a[100];
    cout << "enter the size of the array : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the sum of the array elements are : " << sum2(a, n - 1) << endl;
    cout << "the sum of the array elements are : " << sum1(a, n)<<endl;
    cout << "the sum of the array elements are : " << avg( n ) ;
}