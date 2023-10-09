/*
Write a c program that's find and print the sum of the first positive
100 multiples of 3
*/
#include <stdio.h>

int main(void) {

    int sum;

    for(int i=3;i<=300;i+=3){
        sum+=i;
    }

    printf("The sum = %d\n",sum);

  return 0;
  
  
  
}

// another solution

#include <stdio.h>

int main(void) {

    int sum;

    for(int i=1;i<=100;i++){
        sum+=i*3;
    }

    printf("The sum = %d\n",sum);

  return 0;



}
