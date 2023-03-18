#include<iostream>
using namespace std ;
int insert(int arr[100],int n )
{
  int index;
  int x;
  cout<<"enter the index :";
  cin>>index;
  cout<<"enter the number to be insert :";
  cin>>x;
  cout<<"the insertion is "<<endl;
  for (int i = n; i >index; i--)
  {
    arr[i]=arr[i-1];
  }
  arr[index]=x;
  n++;
  
}
void display(int arr[100],int n)
{
     for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[100];
 int n ;
cout<<"enter the number of array element  :";
  cin>>n;
    cout<<"the elements are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insert(arr,n );
    display(arr,n);
   
}