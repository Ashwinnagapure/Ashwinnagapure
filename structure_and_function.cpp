#include <stdio.h>
struct student
{
    int roll_number;
    char name[100];
    char department[100];
    int joining_year;
};
int n, i;

int student_data(struct student s[])
{
    for (i = 0; i < n; i++)
    {
        printf("enter the name of the student %d : ", i + 1);
        scanf("%s", &s[i].name);
        printf("enter the roll number of the student %d : ", i + 1);
        scanf("%d", &s[i].roll_number);
        printf("enter the department of the student %d : ", i + 1);
        scanf("%s", &s[i].department);
        printf("enter the year of joining %d : ", i + 1);
        scanf("%d", &s[i].joining_year);
    }
}
int year(struct student s[])
{
    int joining;
    printf("enter the joining year of the student : ");
    scanf("%d", &joining);

    printf("\n*****student in the year %d **** \n",joining);
    for (i = 0; i < n; i++)
    {
        if (joining == s[i].joining_year)
        {
            printf("student name : %s\n", s[i].name);
        }
    }
}
int data(struct student s[])
{
    int rollnumber;
    printf("enter the roll number : ");
    scanf("%d", &rollnumber);

    printf("\n***student data having roll number : %d***\n",rollnumber);

    for (i = 0; i < n; i++)
    {
        if (rollnumber == s[i].roll_number)
        {
            printf("name of the student : %s\n", s[i].name);
            printf("department of the student : %s\n", s[i].department);
            printf("year of the student : %d\n", s[i].joining_year);
        }
    }
}

int main()
{
    struct student s[100];
    printf("enter the number of student : ");
    scanf("%d", &n);
    student_data(s);
    year(s);
    data(s);
}