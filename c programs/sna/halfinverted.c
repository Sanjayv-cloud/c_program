#include<stdio.h>
int main (){
    int row,column;
    printf("Enter the no of row you want:");
    scanf("%d",&row);
column = row;
    for(int i=1;i<=row;i++){

        for (int j = 1;j<=column;j++)
        {
            printf("* ");
            
        }
        column--;
printf("\n");
    }
}