/*
Write a program that prints the shape of a square of N x N using dots(.) , digit( 1 ) and digit ( 2 ) 
for the given input N. Both diagonals of the square will be represented by dots. 
The dots of the diagonals will separate the square into 4 triangles (upper, left, right and lower). 
Right and upper triangles will be represented by ones, while left and lower will be represented by twos. 
For example, if the input is 9 then the program should print the following: (Your program should generate any square for given N)
.1111111.
2.11111.1
22.111.11
222.1.111
2222.1111
222.2.111
22.222.11
2.22222.1
.2222222.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 9
int main(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j||i+j==N-1) printf(".");
            else if(i<j) printf("1");
            else printf("2");
        }
        printf("\n");
    }

    return 0;
}
