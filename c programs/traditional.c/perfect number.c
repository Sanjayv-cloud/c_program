#include<stdio.h>
int main() {

    int number;
    printf("Enter a positive integer:");
    scanf("%d", &number); 

int i,rem,sum=0;
    for(i=1;i<number;i++){
     rem = number%i;
        if(rem==0){
            sum =sum + i;
        } 
    }
    if(sum==number){
        printf("\nThe given Number is Perfect");
    }
    else{
        printf("\n The Given Number isn't perfect ");
    }
    return 0;
}