#include <iostream>
using namespace std;
int insert(int a[], int n)
{
    int x;
    cout << "enter the number to be inserted : ";
    cin >> x;
    int i = n - 1;
    while (a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
}
display(int a[], int n)
{
    cout << "after the insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<"\t";
    }
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
    insert(a, n);
    display(a, n);
}