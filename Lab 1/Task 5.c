/* Program to make simple calculations (add, sub, multiply, divid) on two integers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, div;
    printf("Enter two numbers: ");
    scanf("%d,%d", &num1, &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    printf("The sum: %d\n", sum);
    printf("The sub : %d\n", sub);
    printf("The multi: %d\n", mult);
    printf("The divid: %d\n", div);
    return 0;
}
