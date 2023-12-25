#include <stdio.h>
struct database
{
    char name[15];
    int roll;
    float che, maths, phy;
};

int main()
{
    struct database arr[2];
    int i;
    printf("Enter details of 2 students:\n");
    for (i = 0; i < 2; i++)
    {
        printf("enter name of student:");
        scanf("%s", arr[i].name);
        printf("enter the roll no:");
        scanf("%d", &arr[i].roll);
        printf("enter the mark for phy math che:");
        scanf("%f%f%f", &arr[i].phy, &arr[i].maths, &arr[i].che);
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("student details and marks:\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");

    // printing the details of students
    for (int i = 0; i < 2; i++)
    {

        printf("name of student: %s\n", arr[i].name);
        printf("roll no of student : %d\n", arr[i].roll);
        printf("Total mark : %.2f\n", arr[i].phy + arr[i].maths + arr[i].che);
        printf("physics:%.2f\nmathematics:%.2f\nchemistry:%.2f\n", arr[i].phy, arr[i].maths, arr[i].che);
        float avg = (float)(arr[i].che + arr[i].maths + arr[i].phy) / 3;
        printf("the avg mark is %.2f\n\n", avg);
    }
}