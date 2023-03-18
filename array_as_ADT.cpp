#include <iostream>
using namespace std;
struct array
{
    int a[100];
    int lenght;
};

int display(struct array arr)
{
    cout<<"the elements are : \n";
    for (int i = 0; i < arr.lenght ; i++)
    {
        cout<<arr.a[i]<<"\t";
    }
    
}
int main()
{
    struct array arr;
    int n, i;
    cout << "enter the size of array : ";
    cin >> arr.lenght;
    cout << "enter the array element : ";
    for (i = 0; i < arr.lenght; i++)
    {
        cin >> arr.a[i];
    }
    display(arr);
}
