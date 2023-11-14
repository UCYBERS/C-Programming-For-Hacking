// write a program in C to find the sum of the correspendante ellement in a and b and store it in c

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

int c[rows][cols]={0};
// find the sum of the correspendante ellement in a and b and store it in c


  printf("\nc array is :\n");
  for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
        c[i][j]=a[i][j]+b[i][j];
       printf("%d ",c[i][j]);}

       printf("\n");
      }
  return 0;
}
