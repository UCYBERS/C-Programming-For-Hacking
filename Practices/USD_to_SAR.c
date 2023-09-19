/*
C PROGRAMMING TO Convert US Dollars to Saudi Arabian Riyals
USD to SAR
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float usd,sar;

   printf("Please Enter USD : ");
   scanf("%f",&usd);

   sar=usd*3.75;
   printf("%.2f USD = %.2f SAR",usd,sar);
    return 0;

}
