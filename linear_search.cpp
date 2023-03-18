#include <iostream>
using namespace std;
int n;
int search(int a[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}
int display(int a[])
{
    cout << "array elements are  :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int a[n];
    cout << "enter the size of an array : ";
    cin >> n;

    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "enter the key : ";
    cin >> key;
    cout << "number would be found at index : " << search(a, key) << endl;
    display(a);
}