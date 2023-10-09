/*
Write a C program that defines an array of 7 characters (string). You need to prompt the user to
read the string entered then compute how many vowels in that string. You should use switch statement
*/
#include <stdio.h>

int main(void) {

    char a[7];

    printf("Please enter a stringe: ");
    scanf("%s",a);

    int count=0;

    for(int i=0;a[i]!='\0';i++){
    switch(a[i]){

    case 'u':
    case 'U':
    case 'i':
    case 'I':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'a':
    case 'A':
         count++;
    break;

    default: 
      break;

    }
    }
    printf("Number of vowels in the string: %d\n",count);

  return 0;
}
