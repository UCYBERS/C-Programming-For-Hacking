/*
write a program to read integer (positive) number and print its factors
ex: n=12
f: 1 2 3 4 6 12
*/
#include <stdio.h>


int main() {

int num;
printf("please enter integer number: ");
scanf("%d",&num);
printf("f: ");
for(int i=1;i<=num/2;i++){
  if(num%i==0) {
        printf("%d\t",i);
  }
}
printf("%d\t",num);


  return 0;
}

