#include<stdio.h>

int main() {
    double cost, selling, profit, loss;

    // input
    printf("Cost price = ");
    scanf("%lf", &cost);
    printf("Selling price = ");
    scanf("%lf", &selling);

    // process
    if (selling >= cost)
    {
        profit = selling - cost;
        printf("Profit = %.2lf\n", profit);
    } else{
        loss = cost - selling;
        printf("Loss = %.2lf", loss);
    }
    return 0;
    
}