// add before two numbers for next number  
#include<stdio.h>
int main(){
    
    int a,b,n,result,i;
    printf("Enter the numbers: ");
    scanf("%d",&n);

a =0;
b=1;
for(i=0;i<=n;i++){

    printf("%d\n",a);
    result = a+b;
    a = b;
    b = result;
    
}

}