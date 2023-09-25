/*
Write a C program to read an integer number of four digits and find the new reverse number as
follow:
Example 
Number = 1234
New Number= 4321
  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,d1,d2,d3,d4,newN,n;


    printf("please enter integer number of four digits: ");
    scanf("%d",&number);

    n=number;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;

    newN=d1*1000+d2*100+d3*10+d4;


    printf("Your number is %d\nThe transform number is %d\n",number,newN);




    return 0;
}
