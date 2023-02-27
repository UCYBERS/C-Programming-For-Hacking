// Write a C program that
// Prompts (asks) the user to enter a single character
// Prints the two characters following (in alphabet order) the one entered by the user. For example if the user enters character p, the
// program should print q , r

#include <stdio.h>

int main(){
    char ch;

    printf("Please enter a single character: ");
    scanf("%c",&ch);

    printf("the character is %c second %c third %c",ch,ch+1,ch+2);



return 0;
}
