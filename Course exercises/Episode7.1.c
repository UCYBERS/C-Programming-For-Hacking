/*
Write a C program to ask the user to enter one character either C or R or T
R for rectangle
T for right triangle
C for circle
And find print the area of each shape if it's circle ask the user to enter the radius value 
If it's rectangle reads the value of length and
width
And if it's right triangle read The base and the
height...
Area of circle = pi r^2
Area of triangle =1/2*b*h
Area of rectangle =length*width
  */
#include <stdio.h>
#include <stdio.h>


int main() {

    char ch;
    float radius, area;
    float length,width;
    float base,height;

    printf("Please enter C for circle R for rectangle and T for triangle: ");
    scanf("%c",&ch);



    switch(ch) {
         case 'c':
         case 'C':
                  printf("please enter the radius of the circle: ");
                  scanf("%f",&radius);
                  area=3.14*radius*radius;
                  printf("the area of the circle is %.2f",area);
                  break;

         case 't':
         case 'T':
                  printf("please enter the length of the rectangle\n");
                  scanf("%f",&length);
                  printf("please enter the width of the rectangle\n");
                  scanf("%f",&width);
                  area=length*width;
                  printf("the area of the t=rectangle is %.2f",area);
                  break;

         case 'r':
         case 'R':
                  printf("please enter the base of the triangle\n");
                  scanf("%f",&base);
                  printf("please enter the height of the triangle\n");
                  scanf("%f",&height);
                  area=0.5*base*height;
                  printf("the area of the triangle is %.2f",area);
                  default: printf("invalid character\n");
    }

  return 0;
}
