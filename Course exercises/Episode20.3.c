/*
write a C program to find the maximum element of the  correspendante ellements in a and b and store in c
*/

#include<stdio.h>

#define rows 4
#define cols 3

int main(void) {
  int a[rows][cols]={1,2,3,
                    4,5,6,
                    -1,4,5,
                    1,0,9};
  int b[rows][cols]={10,12,33,
                    4,15,6,
                    2,14,5,
                    1,0,9};

int max[rows][cols]={0};
//find the maximum element of the  correspendante ellements in a and b and store in c


  printf("\nc array is :\n");
  for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
        if(b[i][j]>a[i][j])
        max[i][j]=b[i][j];
        else
        max[i][j]=a[i][j];
       printf("%d ",max[i][j]);}

       printf("\n");
      }
  return 0;
}
