/*
read temperature in c and print the equivalent temperature in Fahrenheit 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;

    printf("please enter the temperature in C : ");
    scanf("%f",&c);

    f=c*(9./5)+32;

    printf("%.2f C = %.2f F\n",c,f);
    return 0;
}
