#include<stdio.h>
int selection(int var[],int len){
    int min;
    for(int i = 0;i<len;i++){
        min = var[i];
        int indexmin = i;
        for(int j = i;j<len;j++){
            if(var[j]<min){
                min = var[j];
                indexmin = j;
            }
            // swap
            
        }
    }
}
int main(){
    int arr[5]={1,4,5,64,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection(arr,len);
    printf("result of bubble sort is :");
    for(int i = 0;i<len;i++){
        printf("%d\t",arr[i]);
    }
}