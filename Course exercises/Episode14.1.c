/*
C program searches for a word inside a character array by
taking the word from the user and searching for it inside the character array.
If it finds it, it prints found in location ####. 
If it does not find it, it prints not found.
*/

#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
   char text[]="ADCDACDABADBBADABCACBDCBDABCBABAABDCCBADCBABDBC";
   char key[N];

   printf("please enter up to %d character(A,B,C,D): ",N-1);
   scanf("%s",key);

   int i=0;
   int l=0;
   while(key[i]!='\0'){l++; i++;}

   int j=0;
   int found=0;
   int matches=0;
   while(text[j]!='\0'){
        i=0;
        matches=0;
        if(text[j]==key[i]){

            while(text[i]!='\0'){
                if(text[j+i]==key[i]){
                    matches++;
                }
                else break;
                if(matches==l){
                    printf("found in loction %d\n",j);
                    found=1;
                }
                i++;
            }
        }
    j++;
   }

   if(found==0){
    printf("not found");
   }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
   char text[]="ABACDBACBADBCBADBCACBBDBCBDBABDBABBC";
   char key[N];

   printf("please enter up to %d character(A,B,C,D): ",N-1);
   scanf("%s",key);

   int i=0;
   int found=0;
   while(text[i]!='\0'){
    int j=0;
    while(key[j]!='\0' && text[i+j]==key[j]){
        j++;
    }
    if(key[j]=='\0'){
        printf("found in loction %d\n",i);
        found=1;
    }
    i++;
   }
   if(found==0){
    printf("not found");
   }

    return 0;
}
