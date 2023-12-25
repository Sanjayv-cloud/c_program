#include<stdio.h>
int main(){

    int x,y;

    printf("enter the number of a&b:");
    scanf("%d%d",&x,&y);
    if(y>0){

        while (y!=0)
        {
            x++;
            y--;
        }}
    else if(y<0){

        while (y!=0)
        {
            x--;
            y++;
        }
    }
        printf("the sum of a and b is: %d",x);
    }


// #include<stdio.h>
// int main(){

//     int x,y,sum,carrer;

//     printf("enter the number of a&b:");
//     scanf("%d%d",&x,&y);
// while (y!=0)
// {
//     sum = x^y;
//     carrer =(x&y)<<1;
//     x = sum;
//     y = carrer;

    
// }
//  printf("the sum of a and b is%d:",x);

// }