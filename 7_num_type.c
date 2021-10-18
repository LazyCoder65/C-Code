// A C Program to check if a number is positive or negative

#include <stdio.h>

int main()
{
    int number;

    printf("Please Input A Number To Check: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is a positive number", number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number", number);
    }
    else
    {
        printf("The Entered number if 0");
    }

    return 0;
}