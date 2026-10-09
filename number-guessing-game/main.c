#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret_number;
    int guess;
    int attempts = 0;

    srand((unsigned)time(NULL));
    secret_number = (rand() % 100) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n\n");

    do
    {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Clear invalid input */
            }
            printf("Please enter a valid integer.\n\n");
            continue;
        }

        attempts++;

        if (guess > secret_number)
        {
            printf("Too high! Try again.\n\n");
        }
        else if (guess < secret_number)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("\nCongratulations! You guessed the number correctly in %d attempts!\n", attempts);
        }
    }
    while (guess != secret_number);

    return 0;
}
