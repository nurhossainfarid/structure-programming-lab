#include<stdio.h>

int main() {
    int year;

    // input 
    printf("Enter your year : ");
    scanf("%d", &year);

    // process
    if (year % 400 == 0 && year % 100 == 0 && year % 4 == 0)
    {
        printf("%d is a leap year", year);
    } else {
        printf("%d is not a leap year", year);
    }

    return 0;
    
}