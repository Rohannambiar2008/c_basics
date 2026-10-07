#include <stdio.h>

int main()
{
    float a, b, r;
    int ch;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulus\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            r = a + b;
            printf("Result = %.2f\n", r);
            break;

        case 2:
            r = a - b;
            printf("Result = %.2f\n", r);
            break;

        case 3:
            r = a * b;
            printf("Result = %.2f\n", r);
            break;

        case 4:
            if (b == 0)
            {
                printf("Error: Division by zero\n");
            }
            else
            {
                r = a / b;
                printf("Result = %.2f\n", r);
            }
            break;

        case 5:
            if (b == 0)
            {
                printf("Error: Division by zero\n");
            }
            else
            {
                printf("Result = %d\n", (int)a % (int)b);
            }
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
