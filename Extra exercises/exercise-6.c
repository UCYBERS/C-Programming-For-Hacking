#include <stdio.h>
#include <stdlib.h>
/*
 This program computes the area and perimeter of a rectangle
*/

int main()
{
    float length,width,area,perimeter;

    printf("please enter the length: ");
    scanf("%f",&length);

    printf("please enter the width: ");
    scanf("%f",&width);

    area =length*width;
    perimeter=2*(length+width);

    printf("the area = %.2f\n",area);
    printf("the perimeter = %.2f \n",perimeter);



    return 0;
}
