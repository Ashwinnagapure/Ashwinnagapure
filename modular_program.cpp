/*the program which includes functions in it is
known as modular program */

#include <iostream>
using namespace std;
int area(int lenght, int breadth)
{
    return lenght * breadth;
}
int perimeter(int lenght, int breadth)
{

    return 2 * (lenght + breadth);
}

int main()
{

    int lenght, breadth;
    cout << "enter the lenght of the rectangle : ";
    cin >> lenght;
    cout << "enter the bredth of the rectangle  : ";
    cin >> breadth;

    cout << "the area of the rectangle is " << area(lenght, breadth) << endl;

    cout << "the perimeter of the rectangle is  : " << perimeter(lenght, breadth) << endl;
}