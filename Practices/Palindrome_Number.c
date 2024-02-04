// C program to check whether a four-digit number is a palindrome or not

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,d1,d2,d3,d4,n,reverseNum;

    printf("Please enter number of four digits: ");
    scanf("%d",&number);

    n = number;

    d1= n%10;

    n=n/10;

    d2=n%10;

    n= n/10;

    d3=n%10;

    n = n/10;

    d4 = n%10;

    reverseNum = d1*1000+d2*100+d3*10+d4;

    if(number == reverseNum){
        printf("%d is a palindrome.\n",number);
    } else {
        printf("%d is not a palindrome.\n",number);
    }

    return 0;
}
