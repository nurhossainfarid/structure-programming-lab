#include<stdio.h>

int main() {
    int arif, fahmid, joy;

    // input
    printf("Enter Arif age : ");
    scanf("%d", &arif);
    printf("Enter Fahmid age : ");
    scanf("%d", &fahmid);
    printf("Enter Joy age : ");
    scanf("%d", &joy);

    // process 
    if (arif < fahmid > 0 && arif < joy)
    {
        printf("Arif is youngest than others");
    } else if (fahmid < arif && fahmid < joy) {
        printf("Fahmid is youngest than others");
    } else {
        printf("Joy is youngest than others");
    }
    
    return 0;
}