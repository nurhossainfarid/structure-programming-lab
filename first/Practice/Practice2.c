#include <stdio.h>

int main() {
    int  b;

    b = 30;
    int a = b / 10;

    switch (a)
    {
    case 1:
        printf("You got 1");
        break;
    case 2:
        printf("You got 2");
        break;
    case 3:
        printf("You got 3");
    case 4:
        printf("You got 4");
        break;
    case 5:
        printf("You got 5");
        break;
    
    default:
        printf("You are failed in the exam");
        break;
    }
}