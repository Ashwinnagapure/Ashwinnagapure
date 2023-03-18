#include <iostream>
using namespace std;
int get(int a[], int index, int n)
{
    if (index >= 0 && index < n)

        return a[index];

    else
        return -1;
}

int main()
{
    int index, n;
    int a[100];
    cout << "enter the size of array : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the index : ";
    cin >> index;
    cout << "the number is : " << get(a, index, n);
}