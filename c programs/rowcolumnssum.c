#include<stdio.h>

int main(){
    int var[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    printf("row sum\n");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            sum+=var[i][j];
        }
        printf("%d\t",sum);
        sum=0;
    }
    printf("\ncolumns sum\n");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            sum+=var[j][i];
        }
        printf("%d\t",sum);
        sum=0;
    }
}
