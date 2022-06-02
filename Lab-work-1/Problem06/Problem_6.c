#include <stdio.h>

int main() {
    double num1, num2, medium;

    // Enter input
    printf("Enter num1 : ");
    scanf("%lf", &num1);
    printf("Enter num2 : ");
    scanf("%lf", &num2);
    printf("Enter num1 : ");

    // process
    medium = num1;
    num1 = num2;
    num2 = medium;

    // show output
    printf("Interchange the contents of C and D = %.2lf %.2lf", num1, num2);
    return 0;
}