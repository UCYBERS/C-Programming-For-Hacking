/*
Write a C program to print the following triangle using numbers:
1
23
345
4567
56789
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
    int k;
    for(int i=1;i<=N;i++){
        k=i;
        for(int j=1;j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }

    return 0;
}
