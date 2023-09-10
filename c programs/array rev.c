#include<stdio.h>
int main(){
    int i;
    int a[8]={11,22,34,53,2,4,234,23};
    for(i=0;i<=7;i++){

        printf("%d\t",a[i]);
    }printf("\n");
    for(i=7;i>=0;i--){

        printf("%d\t",a[i]);
    }
}