// write a C program that implements a Temperature Convertor. The program should prompt the user to input the Temperature (in Celsius)
// then convert it into Fahrenheit.


#include <stdio.h>

int main(){
    float C,F;

    printf("Please input the Temperature(in Celsius): ");
    scanf("%f",&C);

    F=C*(9/5.0) +32;
    printf("Celsius to Fahrenheit (°C to °F) = %.2f",F);



return 0;
}
