#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *i ,sum=0;
    for(i=&a[0];i<=&a[4];i++){
        sum+=*i;
    }
    printf("The Sum of the Array is %d",sum);
}