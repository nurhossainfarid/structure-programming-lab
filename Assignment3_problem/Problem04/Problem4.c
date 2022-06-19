#include<stdio.h>

int main() {
    int factorial= 1, number, i;

    printf("Enter your number : ");
    scanf("%d", &number);

    for ( i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    
    printf("\nFactorial number of %d is = %d", number, factorial);

    return 0;
}