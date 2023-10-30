/*
Write a full C program that reads N integers and store them in array
of size N checks if the integers are sorted, equal or random.
Here is how the program should proceed:
1. If all of the numbers are equal , output: "Equal"
2. If the numbers are sorted (smallest to largest), output: "Sorted".
3. If the numbers are not equal and not sorted, output: "Random".
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){

    int a[N]={1,2,3,4,5,6,7,8,9,10};
    int is_equal=1;
    int is_sorted=1;

    for(int i=0;i<N-1;i++){
        if(a[i]!=a[i+1]) is_equal=0;
        if(a[i]>a[i+1]){ is_sorted=0;
                         is_equal=0;
        }}

        if(is_equal==1) printf("Equal\n");
            else if(is_sorted==1) printf("Sorted\n");
                else printf("Random");


    return 0;
}
