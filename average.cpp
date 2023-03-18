#include <iostream>
using namespace std;

int avg(int a[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum/n;
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
    cout << "the avg of the array elements are : " << avg(a,n)<< endl;
}