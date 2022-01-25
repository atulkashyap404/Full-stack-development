#include<stdio.h>

int main()
{
    char operater;
    double value1,value2;
    double result;

    printf("Entre the operater like (+, -, *, /,) : ");
    scanf("%c",&operater);

    printf("Enter the value1\n");
    scanf("%lf",&value1);
    

    printf("Enter the value2\n");
    scanf("%lf",&value2);

    switch (operater)
    {
    case '+':
        result = value1 + value2;
        printf("\nresult: %.3lf", result);
        break;
    case '-':
        result = value1 - value2;
        printf("\nresult: %.3lf", result);
        break;
    case '*':
        result = value1 * value2;
        printf("\nresult: %.3lf", result);
        break;
    case '/':
        result = value1 / value2;
        printf("\nresult: %.3lf", result);
        break;
    
    default:
    printf("Please enter the correct operater +,-,*,/");
    }


    return 0;
}