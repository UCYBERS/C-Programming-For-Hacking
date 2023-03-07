/*
read two integers and find / print the output of all primitive mathematical operation (+,-.*, /, %)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("please enter two integer : ");
    scanf("%d%d",&num1,&num2);

    printf("the value is a = %d\n",num1);
    printf("the value is b = %d\n",num2);

    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d mod %d = %d\n",num1,num2,num1%num2);


    return 0;
}
