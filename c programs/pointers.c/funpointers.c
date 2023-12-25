#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b != 0)
    {
        return (float)a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

float main()
{
    int choice;
    // Perform arithmetic operations and display the results using pointers
    float (*ptr[4])(float, float) = {add, subtract, multiply, divide};
    printf(" 0 = add\n 1 = sub\n 2 = mul\n div = 3\n Enter your choice: ");
    scanf("%d", &choice);
    float num1, num2;
    printf("enter the num for a & b :");
    scanf("%f%f", &num1, &num2);
    float result = ptr[choice](num1, num2);
    printf("the result is %.2f", result);

    return 0;
}
