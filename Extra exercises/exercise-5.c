// Write a C program that reads in the radius of a sphere (الكروي الشكل ,(computes and prints the sphere’s volume based on the following
// equation for computing volume of sphere:
// (4/3) π r3
// Use the value 3.14159 for π.
// Perform the calculation of area inside the printf statement (WITHOUT DEFINING NEW VARIABLE)

#include <stdio.h>

int main(){
    float r,volume;

    printf("Please enter the radius of a sphere :");
    scanf("%f",&r);

    volume=(4/3.0)*3.14159*r*r*r;

    printf("volume of a sphere is %.2f\n",volume);

    printf("the area = %.2f\n",4*3.14159*r*r);

return 0;
}
