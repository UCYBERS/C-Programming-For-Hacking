/*
Write a C program to ask the user to enter one character either c or r or t 
R for rectangle 
T for right triangle 
C for circle 
And find print the area of each shape if it’s circle ask the user to enter the radius value 
If it’s rectangle read the value of lenght and width 
And if it’s right triangle read The base and the height....
Area of circle = pi r^2
Area of triangle =1/2 *b*h
Area of rectangle =length*wifth
  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float radias,area;
    float base,height;
    float length,width;

    printf("please enter C for circle T for triangle and R for rectangle: ");
    scanf("%c",&ch);

    if(ch=='c'||ch=='C'){
        printf("please enter the radias of the circle: ");
        scanf("%f",&radias);
        area=3.14*radias*radias;
            printf("the area of the circle is %.2f\n",area);

    }
    else if(ch=='t'||ch=='T'){
        printf("please enter the base of the triangle: ");
        scanf("%f",&base);
        printf("please enter the height of the triangle: ");
        scanf("%f",&height);
        area=0.5*base*height;
            printf("the area of the triangle is %.2f\n",area);

    }
    else if(ch=='r'||ch=='R'){
        printf("please enter the length of the rectangle: ");
        scanf("%f",&length);
        printf("please enter the width of the rectangle: ");
        scanf("%f",&width);
        area=length*width;
            printf("the area = %.2f\n",area);

    }
    else printf("invalid character");

    return 0;
}
