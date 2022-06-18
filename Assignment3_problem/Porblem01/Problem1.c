#include<stdio.h>
int main()
{
    int num, i,sum=0;
    float avg;
    printf("Input your 10 numbers \n");
    for(i=1;i<=10;i++)
    {
        printf("Number %d : ",i);
        scanf("%d",&num);
        sum = sum + num;
    }
    avg = sum/10.00;
    printf("sum = %d \n",sum);
    printf("Average = %.2f ",avg);

    return 0;
}