#include<stdio.h>
int main() {

    int row;
    printf("enter no of row you want :");
    scanf("%d",&row);
    int i = row;
    for(i ;i>=1;i--){

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
