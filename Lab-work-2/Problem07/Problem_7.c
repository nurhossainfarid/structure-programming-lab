#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3, m1, m2;

    // input
    printf("Enter first points (x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter second points (x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter third points (x3,y3) : ");
    scanf("%d %d", &x3, &y3);

    // process
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    // show output
    if (m1 == m2)
    {
        printf("All the three points fall on one straight line.");
    } else if (m1 != m2){
        printf("All the three points not fall on one straight line."); 
    }

    return 0;
}