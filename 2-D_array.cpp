#include<iostream>
using namespace std ;
int main()
{
    int a[3][4]={{1,2,3,4},{7,8,9,4},{8,9,7,4}};

    for (int i = 0; i < 3; i++)//printing of 2D-array
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<a[i][j];
            cout<<"\t\n";
        }
        
    }
  // 2D-array using pointer   
int * b[3];
b[0]= new int[4];//allocation in c++ 
b[0]=(int*)malloc(sizeof(int));// allocation in c 
b[1]= new int[4];
b[1]=(int*)malloc(sizeof(int));
b[2]= new int[4];
b[2]=(int*)malloc(sizeof(int));




}