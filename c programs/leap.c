#include<stdio.h>
int main(){

    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);

    if(year%4==0){

        printf("%d is leap year:",year);
    }
    else
    {
        printf("%d isn't Leap year",year);
    }
    
}