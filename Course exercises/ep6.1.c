/*
Write a C program to read integers grade out of 100 and convert it to a letter grading system as follows :
A  90-100%
B 80-90%
C 70-79%
D 60-69%
F 0-59%
  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g;
    printf("please enter your grade: ");
    scanf("%d",&g);

    if(g>100 || g<0){
        printf("invalid input");
        return 0;
    }

    if(g>=90) printf("A");
    else if(g>=80) printf("B");
        else if(g>=70) printf("C");
             else if(g>=60) printf("D");
                  else printf("F");

    return 0;
}
