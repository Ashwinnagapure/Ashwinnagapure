#include <iostream>
using namespace std;
int duplicate(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << "the duplicate element is : " << a[i] << "\n"
                 << "the duplicated following  times :" << count << endl;
        }
    }
}

int main()
{
    int a[100];
    int n;
    cout << "enter the size of an array element : ";
    cin >> n;
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    duplicate(a, n);
}