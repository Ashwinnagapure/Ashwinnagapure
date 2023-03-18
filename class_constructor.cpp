#include <iostream>
using namespace std;
class rectangle
{
public:
    int lenght;
    int breadth;

    int area();
    int perimeter();

    ~rectangle()
    {

    } // destructor
};

int rectangle ::area()
{
    return lenght * breadth;
}

int rectangle ::perimeter()
{
    return 2 * (lenght + breadth);
}

int main()
{
    rectangle r;
    cout << "enter the lenght of the rectangle  :";
    cin >> r.lenght;
    cout << "enter the breadth of the rectangle  :";
    cin >> r.breadth;
    cout << "the area of the rectangle is  :" << r.area() << endl;
    cout << "the perimeter of the rectangle is  :" << r.perimeter() << endl;
}