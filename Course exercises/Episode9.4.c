/*
write a program that reads two integer numbers and find print the GCD: 
Greatest common divisor
ex:18,27..   GCD = 9  
  */

#include <stdio.h>


int main(void) {

    int num1,num2,gcd;

    printf("please enter two  integer numbers: ");
    scanf("%d%d",&num1,&num2);

    for(int i=1;i<=(num1<num2?num1:num2);i++){
        if(num1%i==0&&num2%i==0) gcd=i;
                                        }
     printf("GCD: %d\n",gcd);




  return 0;
}
