#include <stdio.h>

int main() {
    int accNo;
    char name[30];
    float balance, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    balance += amount;

    printf("\nAccount Number : %d\n", accNo);
    printf("Name           : %s\n", name);
    printf("Current Balance: %.2f\n", balance);

    return 0;
}