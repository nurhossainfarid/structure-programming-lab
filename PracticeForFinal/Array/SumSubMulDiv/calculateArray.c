#include<stdio.h>

int main() {
    int n, i, sum = 0, sub, mul = 1, division, avg;
    int arr[100];

    printf("Enter your element quantity : ");
    scanf("%d", &n);

    printf("Enter your element number : \n");
    for ( i = 0; i < n; i++)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        mul = mul * arr[i];
    }

    printf("sum is : %d and multiplication is : %d", sum, mul);

    avg = sum / n;
    printf("\navg is : %d ", avg);
}