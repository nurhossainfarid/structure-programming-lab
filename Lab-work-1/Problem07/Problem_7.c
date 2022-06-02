#include<stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, digit5, sum;

    // input 5 number
    printf("Enter 5 digit in one line : ");
    scanf("%d", &num);

    // process
    digit1 = num % 10;
    num = num / 10;
    digit2 = num % 10;
    num = num / 10;
    digit3 = num % 10;
    num = num / 10;
    digit4 = num % 10;
    num = num / 10;
    digit5 = num % 10;

    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    // show output 
    printf("Sum of 5 digits = %d", sum);

    return 0;
}