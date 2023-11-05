/*
Write a complete C program to do the following:
1. Read the name of the user and store it in a string named name. The maximum number of letters in any name is 15.
2. Output the name of the user.
3. Define a new string named duplicate. Store in duplicate the name of the user duplicated. 
For example, if the name of the user is "Ucybers" the string duplicate should contain "UcybersUcybers"
4. Print the string duplicate.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[16];
    char duplicate[31];

    printf("Please enter your name: ");
    scanf("%s",name);

    printf("Hi %s\n",name);

    int length_name=0;

    while(name[length_name]!='\0'){
        length_name++;
    }
    int i=0;
    while(name[i]!='\0'){
        duplicate[i]=name[i];
        duplicate[length_name+i]=name[i];
        i++;
    }
    duplicate[i+length_name]='\0';


    printf("Duplicate: %s",duplicate);

    return 0;
}
