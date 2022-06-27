#include<stdio.h>

int main() {
    int a, b, c, a1, a2, b1, b2, c1, c2;

    printf("Value of a : ");
    scanf("%d", &a);
    printf("Value of a1 : ");
    scanf("%d", &a1);
    printf("Value of a2 : ");
    scanf("%d", &a2);

    printf("Value of b : ");
    scanf("%d", &b);
    printf("Value of b1 : ");
    scanf("%d", &b1);
    printf("Value of b2 : ");
    scanf("%d", &b2);

    printf("Value of c : ");
    scanf("%d", &c);
    printf("Value of c1 : ");
    scanf("%d", &c1);
    printf("Value of c2 : ");
    scanf("%d", &c2);

    if (a > b)
    {
        if (a > c)
        {
            if (a1 > a2)
            {
                printf("a1 is super hero");
            } else {
                printf("a2 is super hero");
            }
            
        } else {
            if (c1 > c2)
            {
                printf("c1 is super hero");
            } else {
                printf("c2 is super hero");
            } 
        } 
    } else if(b > a) {
        if (b > c)
        {
            if (b1 > b2)
            {
                printf("b1 is super hero");
            } else {
                printf("b2 is super hero");
            }
            
        } else {
            if (c1 > c2)
            {
                printf("c1 is super hero");
            } else {
                printf("c2 is super hero");
            } 
        }
    }

    return 0;
    
}