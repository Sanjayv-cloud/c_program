#include<stdio.h>

int bubble(int arr[],int len){

    for(int i = 0;i<len-1;i++){

        for(int j = 0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

}
int main(){
    int arr[5]={1,4,5,64,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,len);
    printf("result of bubble sort is :");
    for(int i = 0;i<len;i++){
        printf("%d\t",arr[i]);
    }
}