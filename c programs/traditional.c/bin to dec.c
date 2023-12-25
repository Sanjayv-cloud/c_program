#include<stdio.h>
int main(){

    int binary,decimal=0,weight=1,rem;
    printf("enter the binary no:");
    scanf("%d",&binary);
while (binary!=0)
{
    rem = binary%10;
    decimal += weight*rem;
    weight = weight*2;
    binary /=10;
}
printf("binary to decimal is : %d\n",decimal);

}