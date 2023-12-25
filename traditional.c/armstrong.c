#include<stdio.h>
int main(){
int count,q,cnt;
int rem,mul=1,result,number;
printf("Enter the the number:");
scanf("%d",&number);
count= 0;
q=number;
while (q!=0)
{
    q = q/10;
    count++;}
    cnt = count;
    q = number;
while (q!=0)
{
    rem =q%10;
    while (cnt!=0)
    {
        mul = mul*rem;
        cnt--;
    }
    result = result + mul;
    cnt = count;
    mul = 1;
    q /= 10;
}
if (result==number)
{
    printf("the give number %d is armstorng\n",result);
}
else{
    printf("%d is not an Armstrong Number\n",result);
}


}