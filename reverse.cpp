#include <iostream>
using namespace std;
int j, i;
int reverse1(int a[], int n)
{
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int reverse2(int a[], int n)
{
    for (i = 0; i < n / 2; i++)
    {

        int first = a[i];
        int second = a[n - i - 1];
        a[i] =  second;
        a[n - i - 1] = first;
    }
}
int display(int a[], int n)
{

    cout << "after the reverse : \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int n;
    int a[100];
    cout << "enter the size of the array :";
    cin >> n;
    cout << "enter the array elements  : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   // reverse1(a, n);
    reverse2(a, n);
    display(a, n);
}