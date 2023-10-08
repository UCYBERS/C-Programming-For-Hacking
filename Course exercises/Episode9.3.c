/*
C Program to Check Whether a Number is Prime or Not
*/
#include <stdio.h>


int main(void) {

int num;
printf("please enter integer number: ");
scanf("%d",&num);
int count=0;

for(int i=2;i<=num/2;i++){
  if(num%i==0) count++;
}

if(count==0&&num!=1){
        printf("Yes its a prime\n");
}
else printf("No its not a prime\n");


  return 0;
}
