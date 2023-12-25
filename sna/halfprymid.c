/*sna assingment Question 1: Half Pyramid of *
*
* *
* * *
* * * *
* * * * * 
*/
/*first step you want to now flow of matrix
second you want to now about loops..*/

#include<stdio.h>
int main (){
    int row;
    printf("Enter the no of row you want:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){

        for (int j = 1;j<=i;j++)
        {
            printf("* ");
            
        }
printf("\n");
    }
}