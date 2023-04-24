// A simple calculator program in C

#include <stdio.h>

int main()
{
    int n1, n2, ch, res;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("-----------------\n");
    printf("Enter Your Choice(1, 2, 3, 4): ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        res = sum(n1, n2);
        printf("The Sum is: %d", res);
        break;

    case 2:
        res = difference(n1, n2);
        printf("The Difference is: %d", res);
        break;

    case 3:
        res = product(n1, n2);
        printf("The Product is: %d", res);
        break;

    case 4:
        res = quotient(n1, n2);
        printf("The Quotient is: %d", res);
        break;

    default:
        printf("Invalid Option");
        break;
    }

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int quotient(int a, int b)
{
    return a / b;
}