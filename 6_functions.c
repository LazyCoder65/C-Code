// A C program showing the usage of functions

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    sum_print(n1, n2);
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

void sum_print(int a, int b)
{
    printf("The Sum is %d", add(a, b));
}