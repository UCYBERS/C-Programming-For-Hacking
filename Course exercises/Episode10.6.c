/*
Write a c program that's find and print the the first 10 positive
power of 2
*/

#include <stdio.h>

int main(void) {

    int sum=0;
    int num=1;

    for(int i=1;i<=10;i++){
        num*=2;
        sum+=num;
      printf("%d ",num);
    }

    printf("\nThe sum = %d\n",sum);

  return 0;



}
