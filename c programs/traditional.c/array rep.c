#include<stdio.h> // data structure ia a format for organinzing and storing data
//containing a number of data values (ala are same data type) 
int main() {
int a[10]={0},n,rem;
printf("enter the number:");
scanf("%d",&n);
while (n>0)
{
    rem = n%10;
    if(a[rem]==1)
    break;
    a[rem]=1;
    n = n/10;
}
if(n>0)
printf("\nnot unique");
else if(n==0)
printf("\nunique\n");  //unique numbers will have all digits as zero in array
}