// Write a program that prompts (asks) the user to enter a 3-digit integer, reads in the integer, then:
// Prints the result of dividing the number by 100 and the remainder (modulus) of division by 100 and
// Prints the result of dividing the number by 10 and the remainder of division by 10
// Finds and Prints the:
// sum of digits
// average of digits (as floating point)
// the result of multiplying the 2 most significant digits (الرقم من خانتين اخر) divided by the least significant digit ( خانة أول
// (من الرقم
#include <stdio.h>

int main( void ){
   int num,num1,num2,num3,num4,num5,sum;

   printf("please enter the integer :");
   scanf("%d",&num);

   num1=num/100;
   num2=num%100;

   printf("%d %d\n",num1,num2);

   num3=num/10;
   num4=num%10;

   printf("%d %d\n",num3,num4);

    num5=num3%10;
    sum=num4+num5+num1;

    printf("%d + %d + %d = %d\n",num4,num5,num1,sum);
    float avg;
    avg=sum/3;
    printf("the average = %.2f\n",avg);
    printf("%d\n",num3/num4);
return 0;
}
