#include<stdio.h>
int main() {

    int row;
    printf("enter the no of row:");
    scanf("%d",&row);
    char var[5] ={'A','B','C','D','E'};
    char *p = var;
    for(int i=1 ;i<=row;i++){

        for(int j=1;j<=i;j++){

            printf("%c",*p);
        }
printf("\n");p++;

    }
}