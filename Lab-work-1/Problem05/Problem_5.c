#include<stdio.h>

int main() {
    float length, width, radius, rectangularArea, rectangularPerimeter, circleArea, circleCircumference;

    // Enter the input
    printf("Enter rectangular Length : ");
    scanf("%f", &length);
    printf("Enter rectangular width : ");
    scanf("%f", &width);
    printf("Enter circle radius : ");
    scanf("%f", &radius);

    // process
    rectangularArea = length * width;
    rectangularPerimeter = 2 * (length + width);
    circleArea = 3.1416 *(radius * radius);
    circleCircumference = 2 * 3.1416 * radius;

    // show output
    printf("Enter rectangular Area , rectangular perimeter, circle area, and circle circumference = %.2f %.2f %.2f %.2f ", rectangularArea, rectangularPerimeter, circleArea, circleCircumference);

    return 0;
}