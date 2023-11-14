/*
Write a program to Rotate90Array that define two arrays (A and B) as well as number of rows n, 
both arrays A and B are of type 2D of size n by n. 
The program rotates array A 90 degree clock wise and place the result in array B. 
Use looping to do the rotation process. Number of columns = n

Example: if n=5, then: 90 degree clockwise rotation means the zero row in A
will become the 4th column in B, the first row in A will be the 3th column in
B and so on until 4th row of A will be in the 0 th column of B.
Example: if A is                    
1 2 3 4 5                            
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
B after rotation:
21 16 11 6 1
22 17 12 7 2
23 18 13 8 3
24 19 14 9 4
25 20 15 10 5
  */

#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
    int a[n][n]={1,2,3,4,5,
                6,7,8,9,10,
                11,12,13,14,15,
                16,17,18,19,20,
                21,22,23,24,25};

    int b[n][n]={0};


    printf("B before rotation: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][4-j]=a[j][i];
    }}

    printf("\nB after rotation: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
