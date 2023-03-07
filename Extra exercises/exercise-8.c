/*
Read integer number of 4 digits and print the decimal value for each digit as follows:
N=5678 
Output should be 5678= 5000+600+70+8
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,d1,d2,d3,d4;

    printf("please enter number of 4 digits: ");
    scanf("%d",&num);

    d1=num%10;
    d2=num/10%10;
    d3=num/100%10;
    d4=num/1000;

    printf("%d = %d + %d + %d + %d \n",num,d4*1000,d3*100,d2*10,d1);


    return 0;
}
