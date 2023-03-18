#include <iostream>
#include <stdlib.h>
using namespace std;

struct student
{
    int roll_no;
    char name[100];
    char dep[100];
    char speciality[100];
    float aggregate;
};

int main()
{

    struct student s;
    system("color 5");
    cout << "enter the name of the student : ";
    cin.getline(s.name,100);
    cout << "enter the roll number of student : ";
    cin >> s.roll_no;
    cout << "\nenter the department of the student :";
    cin.getline(s.dep, 100);
    cout << "\nenter the speciality of the student :";
    cin.getline(s.speciality, 100);
    cout << "enter the aggregate of the student : ";
    cin >> s.aggregate;

    cout << "the roll number of the student is :" << s.roll_no << endl;
    cout << "the name of the student is : " << s.name << endl;
    cout << "the department of the student is : " << s.dep << endl;
    cout << "the speaciality of the student is : " << s.speciality << endl;
    cout << "the aggregate of the student is : " << s.aggregate << endl;
}
