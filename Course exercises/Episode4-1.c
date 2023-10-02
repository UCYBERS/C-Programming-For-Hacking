/*
in c programming Read integer number of four digits and find and print the number in expanded form
Expanded Form

In expanded form, we write the number by showing the value of each digit.
Standard Form              7294
Expanded Form              7000  +  200  +   90  +  4
  */
#include <stdio.h>

int main(){

  int standardNum,d1,d2,d3,d4,n;

    printf("Please enter integer number of four digits: ");
    scanf("%d",&standardNum);

    n=standardNum;

    d1=n%10;

    n=n/10;

    d2=n%10;

    n=n/10;

    d3=n%10;

    n=n/10;

    d4=n%10;



  printf("Expanded Form : %d + %d + %d + %d \n",d4*1000,d3*100,d2*10,d1);
  return 0;
}
