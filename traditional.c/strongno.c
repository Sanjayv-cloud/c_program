#include<stdio.h>

int main(){

    int n,i,q,rem,fact=1,result;

printf("enter the number:");
scanf("%d",&n);
q=n;
while(q!=0){ 
rem = q%10;
for(i=1;i<=rem;i++){

    fact = fact*i;
}
result = result + fact;
fact = 1;
q /= 10;
}
if (result==n)
{
    printf("\nthe given no is a strong\n");
}
else{

    printf("the given no is not strong\n");
}


}