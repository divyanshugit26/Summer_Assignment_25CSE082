#include <stdio.h>

int main() {
    char name[30];
    int seats;
    float fare = 500;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n----- Ticket -----\n");
    printf("Passenger : %s\n", name);
    printf("Seats     : %d\n", seats);
    printf("Total Fare: %.2f\n", seats * fare);

    return 0;
}