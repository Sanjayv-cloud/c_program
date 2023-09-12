// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4,5};
//     int *i ,sum=0;
//     for(i=&a[0];i<=&a[4];i++){
//         sum+=*i;
//     }
//     printf("The Sum of the Array is %d",sum);
// }

#include<stdio.h>
int arr_sum(int arr[],int space){
int sum;

for(int *i =arr;i<=arr+space-1;i++){
    sum+=*i;
}return sum;
}
int main() {

    int space;
    printf("enter the space:");
    scanf("%d",&space);
    int arr[space];
    printf("enter the array no:\n");
    for(int i = 0;i<space;i++){

        scanf("%d",&arr[i]);
        
    }
    
    printf("\narray sum is %d",arr_sum(arr,space));
    return 0;
}