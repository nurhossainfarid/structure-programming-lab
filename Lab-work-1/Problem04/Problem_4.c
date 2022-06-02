#include<stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;

    // Enter input
    printf("Enter your temperature in fahrenheit : ");
    scanf("%f", &fahrenheit);

    // process
    celsius = 5*(fahrenheit-32)/9;
    kelvin = celsius + 273.15;

    // show output 
    printf("Temperature in celsius = %.2f %.2f", celsius, kelvin);

    return 0;
}