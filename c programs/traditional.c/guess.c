#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
srand(time(0));
int random = rand()%100;
int guess,attempt=0;
 puts("***guess the game ****");
do
{   
    printf("\n");
    printf("enter the number: ");
    scanf("%d",&guess);
    if(guess > random)
    {
        printf("the guessed no is high\n");
    }
    else if(guess<random)
    {
        printf("the gussed no is low\n");
    }
attempt++;
} while (random!=guess);

if(guess==random)
{
    printf("congrats u find the crt in %d attempts",attempt);
}
}