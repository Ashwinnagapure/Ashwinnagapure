#include <iostream>
using namespace std;
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
        }
    return max;
}
int main()
{
    int n;
    int a[100];
    cout << "enter the size of an array : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "the maximum number is : " << max(a, n);
}