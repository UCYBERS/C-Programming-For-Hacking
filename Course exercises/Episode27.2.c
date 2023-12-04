// Fibonacci Recursive Program in C

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
if(n==0){
    return 0;
}
else if(n==1) return 1;
else {
    return fibonacci(n-1)+fibonacci(n-2);
}

}

int main()
{
    printf("fibonacci = %d\n",fibonacci(6));
    return 0;
}
