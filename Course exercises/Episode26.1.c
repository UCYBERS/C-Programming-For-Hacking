// Matrix Multiplication in C Progarm

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rows1,cols1;

   printf("please enter rows and cols of array a:");
   scanf("%d%d",&rows1,&cols1);

   int a[rows1][cols1];

   printf("please enter the elemant of array a:\n");

   for(int i=0;i<rows1;i++){
    for(int j=0;j<cols1;j++){
        scanf("%d",&a[i][j]);
    }
   }

   int rows2,cols2;

   printf("please enter rows and cols of array b:");
   scanf("%d%d",&rows2,&cols2);
   int b[rows2][cols2];

   if(cols1!=rows2){
    printf("sorry! we cannot multiply the array a and b");
   }
   else{


    printf("please enter the elemant of array b:\n");

   for(int i=0;i<rows2;i++){
    for(int j=0;j<cols2;j++){
        scanf("%d",&b[i][j]);
    }
   }
   }

   int c[rows1][cols2];

   for(int i=0;i<rows1;i++){
    for(int j=0;j<cols2;j++){
        c[i][j]=0;
        for(int k=0;k<rows1;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }

    }
   }

   printf("result array:\n");

   for(int i=0;i<rows1;i++){
    for(int j=0;j<cols2;j++){
       printf("%d ",c[i][j]);
    }
    printf("\n");
   }



    return 0;
}
