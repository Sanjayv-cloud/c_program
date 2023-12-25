#include<stdio.h>

int main(){

int i,j,n;

printf("enter thr n number of row you want:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=2*n-1;j++)
    {
        if (j>=n-(i-1)&&j<=n+(i-1))
        {
            printf("*");
        }
        else
            printf(" ");
    }
  printf("\n");} 
}

// #include <stdio.h>

// int main() {
//     int height, space, i, j;
    
//     printf("Enter the height of the pyramid: ");
//     scanf("%d", &height);

//     for (i = 1; i <= height; i++) {
//         // Print spaces before the asterisks
//         for (space = 1; space <= height - i; space++) {
//             printf(" ");
//         }

//         // Print asterisks
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }


