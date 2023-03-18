#include <stdio.h>
int stack[5], top = -1, value, choice;

void push()
{
    if (top == 4)
    {
        printf("stack is full ");
    }
    else
    {
        printf("enter the push element : ");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
    }
}

int pop()
{

    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the pop elements is : %d \n", stack[top]);

        top = top - 1;
    }
}

void display()
{

    printf("the array elements are : \n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d \n", stack[i]);
    }
}

int main()
{
    printf("1 for push \n 2 for pop \n 3 for display \n");
    while (1)
    {
        printf("enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("enter the valid option ");
            break;
        }
    }
    return 0;
}
