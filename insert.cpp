#include <iostream>
using namespace std;
int n;
int insert(int a[], int index)
{

    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    int x;
    cout << "enter the number to be insert  :";
    cin >> x;
    a[index] = x;
    n++;
}
int display(int a[])
{
    cout << "after the insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<"\t";
    }
}
int main()
{
    int a[n];

    cout << "enter the size of array  : ";
    cin >> n;
    cout << "the array elements are  : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int index;
    cout << "enter the index value : ";
    cin >> index;

    insert(a,index);
    display(a);
}
