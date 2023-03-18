#include <iostream>
using namespace std;

int set(int a[], int index, int n)
{
    int x;
    cout << "enter the number : ";
    cin >> x;

    if (index >= 0 && index < n)
        return a[index] = x;
    else
        return -1;
}
int display(int a[], int n)
{
    cout << "after set : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int n, index;
    int a[100];
    cout << "enter the size of array : ";
    cin >> n;
    cout << "enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] << "\t";
    }
    cout << "enter the index : ";
    cin >> index;
    set(a, index, n);
    display(a, n);
}