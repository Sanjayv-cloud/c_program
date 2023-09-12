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
// sum of array
int arr_sum(int arr[],int space){
int sum=0;

for(int *i =arr;i<=arr+space-1;i++){
    sum+=*i;
}return sum;
}
int main() {

    int space;
    printf("enter the space:");
    scanf("%d",&space);
    int arr[space];
    printf("\nenter the array no:");
    for(int i = 0;i<space;i++){

        scanf("%d",&arr[i]);
        
    }
      // printing array
      for(int *p = arr;p<=arr+space-1;p++){
        printf("\t%d",*(p));
      }printf("\n");
      
      
      // reverse order 

    for(int *q = arr+space-1;q>=arr;q--){
        printf("\t%d",*q);
    }printf("\n");
  
    printf("\narray sum is %d",arr_sum(arr,space));
    return 0;
}