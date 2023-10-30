/*
C program inserts a word into character array
*/

#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
   char text[]="ABACDBACBADBCBADBCACBBDBCBDBABDBABBC";
   char key[N];
   int loction;

   printf("please enter up to %d character: ",N-1);
   scanf("%s",key);
   printf("please enter loction: ");
   scanf("%d",&loction);

   int lt=0;
   int lk=0;

   while(text[lt]!='\0'){
    lt++;
   }
   while(key[lk]!='\0'){
    lk++;
   }
   int i=lt;
   while(i>=loction){
     text[i+lk]=text[i];
    i--;
   }
   int j=0;
   while(j<lk){
     text[loction+j]=key[j];
     j++;
   }
   printf("%s",text);

    return 0;
}
