#include<stdio.h>
char stack[100],n;
int top = -1 ;

void push()
{
  top = top+1;
  stack[top]= n ;

}
int pop()
{

n =stack[top];
top = top-1 ;

return n ;
}
void presidence(char x)
{

if (x=='')
{
    return 0 ;
}
else if (x=='/'||x=='*')
{
    return  2 ;
}



}
