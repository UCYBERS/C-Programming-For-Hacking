/*
 write a c program that takes an input from the user and prints it if the value is a negative odd number?

if the input value is positive, end the loop with message, Positive Value.
And, if the input value is negative even, skip the value with message, Negative Even.
So, our output will look like :

Enter a number: -23
-23
Enter a number: -22
Negative Even
Enter a number: 2
  2
  */
#include <stdio.h>

int main() {
    int num;

    for(;1;){

        printf("Enter number: ");
        scanf("%d",&num);

        if(num<0&&num%2!=0){
            printf("%d\n",num);
        }
        else if(num>0){
            printf("Positive Value\n");
            break;
        }
        else { printf("Negative Even\n");
               continue;
        }
    }
  return 0;
}
