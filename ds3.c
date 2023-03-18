#include<stdio.h>
int prime(int a);
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);

    printf("prime factor of number  %d is %d",a);
    prime(a);
    return 0 ;
}
 
int prime(int a)
{

    for(int i=0;i<=a;i++)
    {
        if(a%i==0)
    {
        printf("%d",i);
        prime(a/i);
        
    }
    }
    
}