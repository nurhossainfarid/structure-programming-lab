// 2! = 2 * 1;
// 3! = 3 * 2 * 1;
// 4! = 4 * 3 * 2 * 1;
// 5! = 5 * 4 * 3 * 2 * 1;
// 6! = 6 * 5 * 4 * 3 * 2 * 1;
// 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1;
// n! = n *.....7 * 6 * 5 * 4 * 3 * 2 * 1;


#include <stdio.h>

int main() {
    int factorial = 1, i, number;

    printf("Enter the number : ");
    scanf("%d", &number);

    for ( i = 1; i <=number; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %d",number,factorial);    
    return factorial;
}