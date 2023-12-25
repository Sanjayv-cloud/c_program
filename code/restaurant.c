// here is the program 

#include<stdio.h>
int main(){
    float bill = 70.50;
    printf("the restaurant charged %.2f for ravi",bill);

    float tax = bill * (8.0/100);
    printf("\nthe tax amount is:%.2f",tax);
    float tip = bill * (10.0/100);
    float taxplusbill = bill + tax+tip;
    printf("\nthe tip amount is:%.2f",tip);
    printf("\nthe total bill after adding all charges is :%.2f\n",taxplusbill );

}