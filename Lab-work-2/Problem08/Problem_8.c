#include <stdio.h>

int main() {
    int base,height,hypotenuse,area,perimeter;

    printf("Enter the base of triangle: ");
    scanf("%d",&base);

    printf("Enter the height of triangle: ");
    scanf("%d",&height);

    printf("Enter the hypotenuse of triangle: ");
    scanf("%d",&hypotenuse);

    area = .5*base*height;
    perimeter = base+height+hypotenuse;

    // show output 
    if (area > perimeter)
    {
        printf("The area of the triangle is greater than the perimeter of the triangle. %d > %d", area, perimeter);
    } else {
                printf("The area of the triangle is not greater than the perimeter of the triangle. %d !> %d", area, perimeter);
    }

    return 0;
    
}