# Number Guessing Game

This project is a beginner-friendly C program where the computer chooses a random number between 1 and 100, and the user tries to guess it.

## Features

- Random number generation
- User input validation
- Hints for high/low guesses
- Count of attempts
- Game ends when the correct number is guessed

## How to Run

```bash
gcc main.c -o number_guessing_game
./number_guessing_game
```

## Example

```text
Welcome to the Number Guessing Game!
I have chosen a number between 1 and 100. Can you guess it?

Enter your guess: 50
Too low! Try again.

Enter your guess: 75
Too high! Try again.

Enter your guess: 68
Congratulations! You guessed the number correctly in 3 attempts!
```

## Concepts Used

- `rand()` and `srand()`
- `if` / `else if` / `else`
- loops (`do...while`)
- user input and output
- basic input validation
