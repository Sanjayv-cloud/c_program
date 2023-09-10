#include<stdio.h>
#define MAX 50
int main() {
    int a[MAX][MAX] , b[MAX][MAX],Product[MAX][MAX];
    int i,j,k,sum=0;
    int arows,brows,acolumns,bcolumns;
      //part 1
      printf("enter the matrix order for a:");
      scanf("%d%d",&arows,&acolumns);

      printf("Enter the elements of a matrix:\n");
      for(i=0;i<arows;i++){

        for(j=0;j<acolumns;j++){

             scanf("%d",&a[i][j]);
        }
      }  //part 2
      printf("enter the matrix order of b:");
      scanf("%d %d",&brows,&bcolumns);
      
      if(acolumns!=brows){
        printf("\nMatrix multiplication not possible\n");
      }
      else{
        printf("enter the element of matrix b\n");
         
        for(i=0;i<brows;i++){

        for(j=0;j<bcolumns;j++){

             scanf("%d",&b[i][j]);
         
      }}//resultant matrix
      for(i=0;i<arows;i++){
       
       for(j=0;j<bcolumns;j++){
         
           for(k=0;k<acolumns;k++){
            sum+=a[i][k]*b[k][j];
           }
           Product[i][j]=sum;
           sum=0;
       }
      }
      //printing resultant matrix
      printf("resultant matrix:\n");
        for(i=0;i<arows;i++){

        for(j=0;j<acolumns;j++){
        
        printf("%d\t",Product[i][j]);

        }printf("\n");
}
}
}