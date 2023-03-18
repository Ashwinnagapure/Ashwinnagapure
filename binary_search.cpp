#include <iostream>
using namespace std;
int n;

Binary_search1(int a[], int l, int h, int key) // recursive version
{
    l = 0;
    h = n;
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return Binary_search1(a, l, mid - 1, key);
        else
            return Binary_search1(a, mid + 1, h, key);
    }
    return -1;
}

Binary_search(int l, int h, int key) // iterative version
{
    l = 0;
    h = n - 1;
    int a[100];
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (key == a[mid])
        {
            return mid;
        }
        else if (key < mid)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
int main()
{
    int a[100];
    cout << "enter the size of the  : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "enter the key : ";
    cin >> key;
    int l, h;

    cout << "number found is  : " << Binary_search1(a, l, h, key);

    cout << "number found is  : " << Binary_search(l, h, key);
}