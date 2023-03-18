#include <iostream>
using namespace std;
// for sorted array elements
int duplicate(int a[], int n)
{
    int lastdup = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1] && a[i] != lastdup)
        {
            cout << "the duplicate element is : " << a[i] << "\t" << endl;
            ;
            lastdup = a[i];
        }
    }
}
int counting(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            int j = i + 1;
            while (a[j] == a[i])
            {
                j++;
                cout << "dupicated following times :" << j - i;
                i = j - 1;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    cout << "enter the size of an array elements : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    duplicate(a, n);
    counting(a, n);
}