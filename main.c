#include <stdio.h>

int sum(int num1,int num2);

int main(void)
{
    int num1,num2;

    printf("Enter the 1st Number: ");
    scanf("%d",&num1);
    printf("\n");

    printf("Enter the 2nd Number: ");
    scanf("%d",&num2);
    printf("\n");

    printf("SUM = %d\n", sum(num1,num2) );

    return 0;
}

int sum(int num1,int num2)
{
    return num1 + num2;
}