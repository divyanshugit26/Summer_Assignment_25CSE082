#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("===== FIFA & BEST PLAYERS QUIZ =====\n\n");

    printf("Q1. Which country won the FIFA World Cup 2022?\n");
    printf("1. France\n2. Argentina\n3. Brazil\n4. Spain\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("\nQ2. Who won the Ballon d'Or 2023?\n");
    printf("1. Cristiano Ronaldo\n2. Kylian Mbappe\n3. Lionel Messi\n4. Erling Haaland\n");
    scanf("%d", &ans);
    if(ans == 3) score++;

    printf("\nQ3. Which player is known as 'CR7'?\n");
    printf("1. Neymar\n2. Cristiano Ronaldo\n3. Luka Modric\n4. Mohamed Salah\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("\nQ4. Which country has won the most FIFA World Cups?\n");
    printf("1. Germany\n2. Argentina\n3. Italy\n4. Brazil\n");
    scanf("%d", &ans);
    if(ans == 4) score++;

    printf("\nQ5. Which club did Lionel Messi join in 2023?\n");
    printf("1. Real Madrid\n2. Al Nassr\n3. Inter Miami\n4. Barcelona\n");
    scanf("%d", &ans);
    if(ans == 3) score++;

    printf("\nYour Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent! You are a Football Expert.\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Watching Football!\n");

    return 0;
}