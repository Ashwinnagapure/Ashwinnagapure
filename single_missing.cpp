#include <iostream>
using namespace std;
/*int element1(int a[], int n)
{
    int sum = 0;
    n = a[n - 1];
    cout << "the n = " << n << endl;
    int s = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + a[i];
    }

    int z = s - sum;
    cout << "the missing element is : " << z;
}*/
int element2(int a[], int n)
{
    int l, h;
    l = a[0];
    h = a[n - 1];
    int diff = l - 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            cout << i + diff<<"\t";
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout << "enter the size of the array : ";
    cin >> n;
    cout << "enter the elements of the array  : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   // element1(a, n);
    element2(a, n);
}