#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the value = ");
    scanf("%d",&num);
    printf("Factor of %d are = ",num);
    
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d\t",i);

        }
    }
}