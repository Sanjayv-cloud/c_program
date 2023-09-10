#include<stdio.h>
int main(){
    int row ,n=1;
    printf("enter the no of row: ");
    scanf("%d",&row);
    for(int i = 1;i<=row;i++){

        for(int j=1;j<=i;j++){
            printf("%d\t",n);
            n++;
        }printf("\n");
    }
}