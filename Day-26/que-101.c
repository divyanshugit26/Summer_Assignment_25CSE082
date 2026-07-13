#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number (1-100): ");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High! Try Again: ");
        else if (guess < number)
            printf("Too Low! Try Again: ");
        else
            printf("Correct! You guessed it.\n");

    } while (guess != number);

    return 0;
}