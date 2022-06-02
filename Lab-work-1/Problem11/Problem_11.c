#include <stdio.h>

int main() {
    double amount, ten, fifty, hounded;

    // input
    printf("Enter your amount = ");
    scanf("%d", &amount);

    // process
    ten = amount / 10;
    fifty = amount / 50;
    hounded = amount / 100;

    // show output
    printf("The cashiar will give ten notes=%d\n fifty notes=%d\n hundred notes=%d\n", ten, fifty, hounded);

    return 0;
}