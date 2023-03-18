#include <iostream>
using namespace std;

int element(int a[], int n)
{
    int l, h;
    l = a[0];
    h = a[n - 1];
    int diff = l - 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            while (diff < a[i] - i)
            {
                cout << i + diff << "\t";
                diff++;
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

    element(a, n);
}