#include<math.h>
#include<stdio.h>
int prime(int n){

    if(n<=1){
        return 0;
    }
    int square = sqrt(n);
    for(int i=2;i<=square;i++){

        if ((n%i==0))
        {
            return 0;
        }
    
        
    }return 1;
}

int main(){ int n;
    printf("enter the number:");
    scanf("%d",&n);

    if(prime(n)){
        printf("\nthe given no is prime");
    }
    else{printf("\n the given no is not prime");}
}


