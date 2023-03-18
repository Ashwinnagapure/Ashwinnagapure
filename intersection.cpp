#include<iostream>
using namespace std;
struct array // in c
{
    int a[100];
    int size;
    int lenght;
};

struct array *merge(struct array *a1, struct array *a2)
{
    int i, j, k;
    i = j = k = 0;
    struct array *a3 = (struct array *)malloc(sizeof(struct array));
    while (i < a1->lenght && j < a2->lenght)
    {
        if (a1->a[i] < a2->a[j])
        {
            i++;
        }
        else if (a2->a[j] < a1->a[i])
        {
            j++;
        }
        else
        {
            a3->a[k++] = a1->a[i++];
            j++;
        }
    }

    a3->lenght = k;
    a3->size = 10;
    return a3;
}
int display(struct array a)
{
    cout << "after the merging ";
    for (int i = 0; i < a.lenght; i++)
    {
        cout << a.a[i] << "\t";
    }
}
int main()
{
    struct array a1;
    struct array a2;
    struct array *a3;
    cout << "enter the size of the array 'a1' : ";
    cin >> a1.size;
    cout << "enter the lenght of the array 'a1' : ";
    cin >> a1.lenght;
    cout << "enter the array elements of 'a1' : ";
    for (int i = 0; i < a1.lenght; i++)
    {
        cin >> a1.a[i];
    }
    cout << "enter the size of the array 'a2' : ";
    cin >> a2.size;
    cout << "enter the lenght of the array 'a2' : ";
    cin >> a2.lenght;
    cout << "enter the array elements of 'a2' : ";
    for (int j = 0; j < a2.lenght; j++)
    {
        cin >> a2.a[j];
    }

    a3 = merge(&a1, &a2);
    display(*a3);
}