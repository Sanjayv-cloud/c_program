#include<stdio.h>

int fun(int var[], int *max, int *min, int space);

int main(){
int space;
printf("enter the space:");
scanf("%d",&space);
    int var[space];
    printf("\nenter the number :");
    for(int i=0;i<space;i++){
        scanf("%d",&var[i]);
    }
    int len =sizeof(var)/sizeof(var[1]);
    int max,min;
    fun(var,&max,&min,len);
    printf("\n min of array is :%d max of array is :%d",min,max);

}

int fun(int var[],int *max,int *min,int len){

    *min=*max=var[0];
    for(int i=1;i<len;i++){
        if(var[i]<*min){
            *min = var[i];
        }
        if(var[i]>*max){
            *max = var[i];
        }
    }
}