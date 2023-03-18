#include <iostream>
using namespace std;
struct node
{
    int lenght = 10;
    int breadth = 20;
};

int main()
{

    node *p;
    p = new node; // dynamically allocation in heap memory
    p->breadth = 11;
    p->lenght = 88;
    cout << p->breadth << endl;
    cout << p->lenght << endl;

    /* node s;
     cout << "lenght is :" << s.lenght << endl;
     cout << "breadth is : " << s.breadth << endl;
     node *p = &s;
     cout << "lenght is : " << p->lenght << endl;
     cout << "breadth is :" << p->breadth << endl;
     */
}