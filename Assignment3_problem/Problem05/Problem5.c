#include<stdio.h>

int main() {
    int  num, sum = 0, reminder, temp;

    printf("Enter your value : ");
    scanf("%d", &num);

    temp = num;

    while (temp !=0) {
        reminder = temp % 10;
        sum = sum + reminder * reminder * reminder;
        temp = temp / 10;
    }

    if (num == sum)
    {
        printf("%d is armstrong number.", num);
    } else {
        printf("%d is not armstrong number.", num);
    }

    return 0;
    
}