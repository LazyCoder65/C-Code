
#include <stdio.h>

int main()
{
    int a,b,temp=0;
    scanf("%d", &a);
    scanf("%d",&b);
    printf("Before Swapping a=%d b=%d", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping a=%d b=%d", a,b);

    return 0;
}
