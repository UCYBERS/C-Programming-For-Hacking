// C Program to Make a Simple Calculator Using switch...case

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double num1,num2;
    double result;

    printf("Choose an operater ['+','-','*','/']: ");
    scanf("%c",&op);

    printf("Please enter the first number: ");
    scanf("%lf",&num1);

    printf("Please enter the second number: ");
    scanf("%lf",&num2);

    switch(op){
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            result=num1/num2;
            break;
        default:
            printf("Invalid operater\n");
            return 0;

    }
    printf("%.2lf %c %.2lf = %.2lf\n",num1,op,num2,result);

    return 0;
}
