#include <stdio.h>

int main(void) {
    int n, i;
    int isPrime = 1;

    printf("Prime Number Checker\n");
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n <= 1) {
        printf("%d is not a prime number\n", n);
        return 0;
    }

    for (i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
