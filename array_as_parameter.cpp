#include <iostream>
using namespace std;

int *fun(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    return (p);
}
int main()
{
    int *ptr, size;
    size=5;
    ptr = fun(size);
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
}

/*void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{
int A[]={1,2,3,4,5};
int n=5;
fun(A,n);
for(int x:A)
{
cout<<x<<endl;
}


}*/