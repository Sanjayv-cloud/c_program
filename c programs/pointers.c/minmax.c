#include<stdio.h>

int fun(int var[], int *max, int *min, int space);

int main(){
int space;
printf("enter the space:\n");
scanf("%d",&space);
    int var[space];
    printf("enter the number :\n");
    for(int i=0;i<space;i++){
        scanf("%d",&var[i]);
    }
    int len =sizeof(var)/sizeof(var[1]);
    int max,min;
    fun(var,&max,&min,space);
    printf("\n min of array is :%d max of array is :%d",min,max);

}

int fun(int var[],int *max,int *min,int space){

    *min=*max=var[0];
    for(int i=1;i<space;i++){
        if(*min>var[i]){
            *min=var[i];
        }
        if(*max<var[i]){
            *max=var[i];
        }

    }
}