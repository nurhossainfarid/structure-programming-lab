#include<stdio.h>

int main() {
    int number, reverse_number = 0, reminder;

    // input
    printf("Enter your 5 digit number : ");
    scanf("%d", &number);

    // process
    while (number != 0) {
        reminder = number % 10;
        reverse_number = reverse_number * 10 + reminder;
        number = number / 10;
    }

    // show output
    printf("Reverse number is %d\n",reverse_number);
    if (number != reverse_number)
    {
        printf("Both are not equal");
    } else {
        printf("Both are equal");
    }

    return 0;
}