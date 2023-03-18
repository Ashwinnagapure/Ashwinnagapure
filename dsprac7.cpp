#include <iostream>
using namespace std;
int search(int a[], int key)
{
    int n, i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
}
int main()
{
    int a[100], key, n, i;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the array elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the value to be searched : ";
    cin >> key;

    int x = search(a, key);
     if (x != -1)
    {
        cout<<"the element found at "<<x<<endl;
    }
}