#include<stdio.h>
int main() {

int result =0 ,q,n,rem ;
printf("Enter the number of terms: ");  //taking input from user for no.of
scanf("%d",&n);

q = n;

while (q!=0)
{
   rem = q%10;
   result = result * 10 + rem ;
   q =  q/10;
}

if (n==result)
{
    printf("it is palidrome");
}
else
{
    printf("not a pallindrome");
}

}