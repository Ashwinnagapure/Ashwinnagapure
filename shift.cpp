#include <iostream>
using namespace std;
int i, j;

int rotate(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {

        a[i] = a[i + 1];
        a[n] = a[0];
    }
}
int shift(int a[], int n) // left shift
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
        a[n] = 0;
    }
}
int display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int n;
    int a[100];

    cout << "enter the size of the array : ";
    cin >> n;
    cout << "enter the array elemments : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // shift(a, n);
    rotate(a, n);
    display(a, n);
}