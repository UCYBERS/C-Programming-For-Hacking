/*
Write a C program that takes a pre-defined character array and removes all the spaces as follows

I study in UCYBERS

IstudyinUCYBERS
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char hacker[50]="I study in UCYBERS";

   printf("1: %s\n",hacker);


   for(int i=0;i<50;i++){
    if(hacker[i]==' '){
        for(int j=i;j<50;j++){
            hacker[j]=hacker[j+1];
        }
    if(hacker[i]==' ') i--;


    }
   }








   printf("2: %s\n",hacker);



    return 0;
}
