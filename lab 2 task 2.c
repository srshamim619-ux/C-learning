#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %d\n", a / b);
    }
    else
    {
        printf("Quotient cannot be calculated because second value is zero.\n");
    }

    return 0;
}
