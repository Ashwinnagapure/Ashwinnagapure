#include <iostream>
using namespace std;
int n;
int deletion(int a[], int index)
{
    int x;
    x = a[index];
    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
int display(int a[])
{
    cout << "after deletion : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int a[100];
    cout << "enter the size of an array  :";
    cin >> n;

    cout << "enter the array elements  : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index;
    cout << "enter the index : ";
    cin >> index;

    deletion(a, index);
    display(a);
}