#include <iostream>
using namespace std;

int main()
{
    int n;
    // int A[100];
    // int A[10]={1,4,5,6,3,1,8};  //we can also intialize array like this
    cout << "enter the size of an array : ";
    cin >> n;
    int A[n]; // we can write or declare the array like this after giving an size
    cout << "enter the array elements  : " << endl;

    for (int i = 0; i < n; i++) // by using this we take the input from user
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "the array elements are : " << A[i] << endl;
    }

    cout << "\nprinting the array elements using for each loop" << endl;
    for (int x : A)
    {
        cout << x << endl;
    }
  cout<<"size of the array in perticular data type can be given as "<<endl;
    cout << sizeof(A);

    return 0;
}