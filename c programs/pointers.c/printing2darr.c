#include<stdio.h>
int main(){
    int row=2,col=3;
    int arr[2][3]={{1,2,3},{2,3,4}};
    for(int *i =&arr[0][0];i<=&arr[row-1][col-1];i++){

        printf("\t%d",*i);
    }
}