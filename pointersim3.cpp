#include <iostream>
#include <stdlib.h>
using namespace std;

struct point
{
    int a;
    float c;
};

int main()
{
    int *p;
    p = new int[5];//memory allocation in heap memory dynamically
    p[0]=1;
    p[1]=2;
    p[2]=14;
    p[3]=5;
    p[4]=6;
    for (int i = 0; i < 5; i++)
     cout << p[i] << endl;
    

    /* int *p1;
     float *p2;
     char *p3;
     struct point *p4;


     cout<<sizeof(p1)<<endl;
     cout<<sizeof(p2)<<endl;
     cout<<sizeof(p3)<<endl;
     cout<<sizeof(p4)<<endl;

 */
    /* int a[5]={1,2,3,4,5} ;

         int *p;
         p=a;

         for (int i = 0; i < 5; i++)
         {
            cout<<a[i]<<endl;
         }*/

    /* int a = 10;
     int *p;
     p = &a;
     cout << a << endl;
     cout << *p<<endl;
     cout<<&a<<endl;
     cout<<p;*/
}