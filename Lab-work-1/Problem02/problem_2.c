#include <stdio.h>

int main() {
    float meter, feet, inches, centimeter;
    // get input
    printf("The distance between Mirpur to Ashulia in meter : ");
    scanf("%f", &meter);

    // process
    feet = meter * 3.28;
    inches = meter * 39.37;
    centimeter = meter * 100;

    // show output
    printf("The distance between Mirpur to Ashulia : %.2f\n %.2f\n %.2f\n %.2f", meter, feet, inches, centimeter);

    return 0;
}