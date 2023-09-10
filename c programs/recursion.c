// recrusion program a function calls itself directly orr indirectly 

#include<stdio.h>

int fun(int n){

    if (n==1)
    {
        return 1;
    }
    else
{return 1 + fun(n-1);}
    
}
int main(){

int n = 3;
printf("%d",fun(n)); // output:6, as the sum of first three natural

}