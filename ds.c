#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int size ;
    int top;
    int*arr;
};


int isempty(struct stack s )
{
if (s.top== -1)
{
    return 1 ;
}
else
{
     return 0 ;
}
int isfull(struct stack s)
{

if ( s.top== s.size-1)
{
    return 1 ;

}
else
{
     return 0 ;
}


}

}

int  main()
{
struct stack s;
s.size=80 ;
s.top=-1;
s.arr=(int*)malloc(s.size*sizeof(int));
 //return s.arr[s.top--];
 //s.arr[0]=7;
 //s.top ++ ;

if (isempty(s))
{
    printf("the stack is empty ");
}
else
{
    printf("stack is not empty ");
}


}