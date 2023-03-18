/*the program which is written only in main function is
known as monolithic program */

#include <iostream>
using namespace std;
int main()
{
    int lenght, breadth, area;

    cout << "enter the lenght of the rectangle  :";
    cin >> lenght;
    cout << "enter the breadth of the rectangle :";
    cin >> breadth;
    area = lenght * breadth;
    cout << "the area of the rectangle is :" << area << endl;
}
