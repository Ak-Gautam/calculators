// C program to create a simple calculator for 2 numbers

#include <stdio.h>

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter two numbers and an operator: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}
