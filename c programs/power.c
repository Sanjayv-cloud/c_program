#include<stdio.h>
int main(){

int base,exponent,power=1,ext;
int power1;
printf("Enter the value of Base: "); //Taking input from user for calculating
scanf("%d",&base);
printf("Enter the value of exponent: "); //Taking input from user for calculating
scanf("%d",&exponent);
ext = exponent;
if(exponent>0){
while (ext!=0)
{
    power = power*base;
    ext--;  //Decreasing exponent by one in each iteration until it becomes zero
}printf("%d to the power of %d is %d:",base,exponent,power);
}
else if(exponent<0){

    while (ext!=0)
    {
    power1 = power1*(1.0/base);
    ext++; 
    }printf("%d to the power of %d is %d:",base,exponent,power1);
}

}