#include <iostream>
#include <stdlib.h>
using namespace std;
struct ds
{
    int math;
    int phy;
};

int main()
{
    system("color 9");
    struct ds x;

    cout << "enter the maths marks : " << endl;
    cin >> x.math;
    cout << "enter the phy marks : " << endl;
    cin >> x.phy;
    cout << "the marks in maths are  " << x.math << endl;
    cout << "the marks in phy are " << x.phy << endl;

    if (x.math >= 40 && x.phy >= 40)
    {
        cout << "the student is pass :";
    }
    else
    {
        cout << "student is fail ";
    }
}
