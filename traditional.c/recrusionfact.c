//recrusion factorial program

#include<stdio.h>
int fun(int n){

    if(n==1){
        return 1;
    }
    else{

        return n * fun(n-1);
    }
}
int main(){
    
int n;  
printf("enter the number of fact:");
scanf("%d",&n);
printf("%d\n",fun(n));

}
