/*
program c to calculat area and perimeter of a circle
*/

#include <stdio.h>
#include <stdlib.h>

void CircleArea(float r ){

    float area =3.14*r*r;
    float perimeter=2*3.14*r;
    printf("The area = %.2f\n",area);
    printf("The perimeter = %.2f\n",perimeter);

}

int main()
{
    float r;

    printf("please enter the radius: ");
    scanf("%f",&r);

    CircleArea(r);
    

    return 0;
}
