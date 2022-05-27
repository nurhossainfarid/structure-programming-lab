#include<stdio.h>
int main(){

    //variable declare
    float temperature_cel, temperature_fer;
    
    //take input from user
    printf("Please input temperature in Fahrenheit = ");
    scanf("%f", &temperature_fer);

    //convert to celsius
    temperature_cel = (temperature_fer - 32) * 5 / 9;

    //print result
    printf("temperature in Celsius is= %.2f", temperature_cel);

    return 0;
}