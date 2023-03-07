/*
find  and print the average for three integers as float 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    float sum,avg;

    printf("please enter three integer : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    avg=sum/3;

    printf("the average = %.2f",avg);

    return 0;
}
