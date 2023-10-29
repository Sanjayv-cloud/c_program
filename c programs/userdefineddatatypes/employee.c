#include <stdio.h>
// structure for empolyee table
struct employee
{
    char name[30];
    int employee_id, salary;
    char dep[20];
};

int main()
{
    struct employee data[2];
    int i;
    puts("***enter the details of employee***\n");
    for (i = 0; i < 2; i++) // initilazting value to employee table
    {
        printf("Enter the name of employee & dep:");
        scanf("%s%s", data[i].name, data[i].dep);
        printf("Enter Employee ID : ");
        scanf("%d", &data[i].employee_id);
        printf("Enter Salary : ");
        scanf("%d", &data[i].salary);
    }

    puts("printing the details of employee\n");
    for (i = 0; i < 2; i++) // printing details of employee table;
    {
        printf("name of the employee %s\n", data[i].name);
        printf("Department name is %s\n", data[i].dep);
        printf("Employee id is %d\n", data[i].employee_id);
        printf("Salary is %d\n\n\n\n", data[i].salary);
    }
}