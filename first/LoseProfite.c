#include<stdio.h>

int LoseProfite() {
    double selling, cost_price, profite, lose,i;

    for(i = 1; i<=10; i++) {
        printf("%d", i);
      }

    printf("Enter const_price : ");
    scanf("%lf", &cost_price);
    printf("Enter selling : ");
    scanf("%lf", &selling);

    if(selling > cost_price) {
        profite = selling - cost_price;
        printf("Profit = %lf", profite);
    } else {
        lose = cost_price - selling;
        printf("Lose = %lf", lose);
    }
    return 0;
}
