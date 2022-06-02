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

    // show output
    printf("%d%d%d%d%d", digit1, digit2, digit3, digit4, digit5);
}