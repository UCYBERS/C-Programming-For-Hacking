/*
Write a C program that reads a number N and outputs the shape of a tornado of size N. The following
are examples:
Tornado Of size 7
*******
 *******
******
 ******
*****
 *****
****
 ****
***
 ***
**
 **
*
 *
Tornado Of size 4
****
 ****
***
 ***
**
 **
*
 *
Tornado Of size 1
*
 *
*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    int N;
    printf("please size of tornado: ");
    scanf("%d",&N);

    for(int k=0;k<N;k++){

    for(int i=0;i<2;i++){
        if(i==1) printf(" ");
        for(int j=0;j<N-k;j++){
            printf("*");
        }

        printf("\n");


    }
    }

    return 0;
}
