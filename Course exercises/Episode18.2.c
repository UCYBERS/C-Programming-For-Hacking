/*
Write a complete C program that
Read a string and store it in an array of character named s1. The maximum number of letters in the input string is 15.
Read another string and store it in an array of character named s2. The maximum number of letters in the input string is 20.
Concatenates (appends يضيف) the second string to the end of first String(يضيف الثانية الى نهاية الاولى) The result must be stored in the first array. 
(make sure it has enough space). For example, if the string in the first array is "Iam " and the string in the second array is "Hacker", 
your program should store "IamHacker" in the first array and then add a NULL at the end.
In this question, you are not allowed to use the library functions defined in string.h
  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[16];
    char s2[21];

    printf("Please enter string 1 text up to 15 character: ");
    scanf("%s",s1);

    printf("Please enter string 2 text up to 20 cahracter: ");
    scanf("%s",s2);

    int length_s1=0;
    int length_s2=0;
    while(s1[length_s1]!='\0'){ length_s1++; }
    while(s2[length_s2]!='\0'){ length_s2++; }

    if((length_s1+length_s2)<16){
        for(int j=0;s2[j]!='\0';j++){
            s1[length_s1+j]=s2[j];
        }
        s1[length_s1+length_s2]='\0';

        printf("s1 after concatunation: %s",s1);
    }
    else printf("Not enough spaces\n");




    return 0;
}
