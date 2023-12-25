#include<stdio.h>
int main()
{  
    int num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    
    for(int i =1;i<=num;i++)
    {
        if(i%2==0)
        {
           sum+=i; 
        }
        else
        {
            continue;
        }
    }printf("%d",sum);
}