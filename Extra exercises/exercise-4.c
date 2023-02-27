// Write a C program that accepts inputs two integers, stores them in variables X and Y, respectively, and then swaps the two variables’
// values.
// For example, if the user’s first input is 35 (stored in variable X) and the second input is 99 (stored in variable Y), then the program has to
// swap the variables values, so that 35 will be stored in Y and 99 will be stored in X.
// Solve the problem using a third temporary variable
// Re-solve the problem without using a temporary variable.

#include <stdio.h>

int main(){
    int x,y;

    printf("Please enter two integers :");
    scanf("%d%d",&x,&y);

    // Re-solve the problem without using a temporary variable.

    printf("x = %d and y = %d\n",y,x);
    // Solve the problem using a third temporary variable
    int temp;

    temp=x;
    x=y;
    y=temp;

    printf("x = %d and y = %d\n",x,y);

return 0;
}
