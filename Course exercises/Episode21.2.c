/*
in C prorgram write CircularShiftDown : a two dimensional integer array A, an integer n represents number of rows n, 
and integer number m. Assume number of columns is 4. the program should shift the array rows down m times. 
Each shift operation makes the first row becomes second row, second row becomes third row and so on, 
the last row becomes the first row in the array Example: if n = 6,
Example Array A before Shift
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
5 5 5 5
6 6 6 6
A after shift m=2:
5 5 5 5
6 6 6 6
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
#include <stdio.h>
#include <stdlib.h>
#define n 6

int main()
{
    int m;
    int a[n][4]={1,1,1,1,
                 2,2,2,2,
                 3,3,3,3,
                 4,4,4,4,
                 5,5,5,5,
                 6,6,6,6};
    printf("please enter shift foctor: ");
    scanf("%d",&m);


    printf("A before shift: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int k=0;k<m;k++){
    int temp[4];

    for(int i=0;i<4;i++){
        temp[i]=a[n-1][i];
    }

    for(int i=n-1;i>0;i--){
        for(int j=0;j<4;j++){

            a[i][j]=a[i-1][j];
    }}

    for(int i=0;i<4;i++){
        a[0][i]=temp[i];
    }

    }
    printf("\nA after shift: \n");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
