#include<stdio.h>
int main (){
    int num1,num2;
    char operation;
    printf("Enter the no of two operand (eg:2+5):");
    scanf("%d%c%d",&num1,&operation,&num2);

    switch (operation)
    {
    case '+':
        printf("the addition of two given oprend is %d",num1+num2);
        break;
    case '-':
        printf("the subraction of two given oprend is %d",num1-num2);
        break;
    case '*':
        printf("the multiplication of two given oprend is %d",num1*num2);
        break;
    case '/':
    if(num2==0){
        printf("\nError! Division by zero not possible");}
    else{
        printf("the division of  two given oprend is %d",num1/num2);
        break;}
    case '%':
        printf("the reminder of  two given oprend is %d",num1%num2);
        break;
    
    default:
    printf("invalid operation");
        break;
    }
}