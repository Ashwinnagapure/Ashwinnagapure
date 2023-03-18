#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    printf("a=%d , b = %d\n", a, b);
}


int main()
{
int a=10 ,b=5;
swap(a,b);

//cout<< "number 1 "<<a<<endl;
//cout<<"number 2 :"<<b<<endl;



}