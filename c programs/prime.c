#include <stdio.h>
#include <math.h>//gcc -o prime primefun.c -lm

int main(){
    int n,square,i,count=0;
    printf("enter thr number:");
    scanf("%d",&n);

    square = sqrt(n);

    for(i=2;i<=square;i++){

        if (square%i==0){
        count = 1;
        break;}
        
    }
    if(count==0 && (n>1||n==2||n==3)){
    printf("it is prime number");
    }
    else
    {printf("not a prime number");}
    return 0;
}