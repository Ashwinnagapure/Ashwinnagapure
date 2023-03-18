#include <iostream>
using namespace std;
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    int a[100];
    cout << "enter the size of the array elements : ";
    cin >> n;
    cout << "enter the array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "the minimum element is : " << min(a, n);+9
}