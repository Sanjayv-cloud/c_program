#include<stdio.h>
int main() {

    int row;
    printf("enter no of row you want :");
    scanf("%d",&row);
    for(int i =1 ;i<=row;i++){

        for(int j = 1;j<=2*row-1;j++){

            if(j>=row-(i-1)&&j<=row+(i-1)){

                printf("*");
            }
            else{
                printf(" ");}
            }
            printf("\n");
        }
    }