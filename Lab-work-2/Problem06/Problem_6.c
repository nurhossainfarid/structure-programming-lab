#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    // input 
    printf("Enter angle1 value : ");
    scanf("%d", &angle1);
    printf("Enter angle2 value : ");
    scanf("%d", &angle2);
    printf("Enter angle3 value : ");
    scanf("%d", &angle3);

    // process
    sum = angle1 + angle2 + angle3;

    // show output
    if (sum == 180)
    {
        printf("Triangle is valid");
    } else {
        printf("Triangle is not valid");
    }

    

    return 0;
    
}