/*
Write a C program 
Write a program to read integer number of four digits and find the equivalent number in expanded form
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int standardNum,d1,d2,d3,d4,n;

    printf("please enter integer number of four digits: ");
    scanf("%d",&standardNum);

    n=standardNum;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;

    printf("Expanded Form: %d + %d + %d + %d\n",d4*1000,d3*100,d2*10,d1);




    return 0;
}
