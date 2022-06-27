#include<stdio.h>

int main() {
    int numbers[100], i, n;

    printf("Enter your element numbers : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter your %d element : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];
    int min = numbers[0];

    for ( i = 1; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < max)
        {
            min = numbers[i];
        }
    }
    
    printf("\n Maximum number : %d", max);
    printf("\n Minimum number : %d", min);


    return 0;
    
}