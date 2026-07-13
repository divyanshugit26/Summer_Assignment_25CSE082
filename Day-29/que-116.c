#include <stdio.h>

struct Item {
    int id, quantity;
    char name[30];
};

int main() {
    struct Item i;

    printf("Enter Item ID: ");
    scanf("%d", &i.id);

    printf("Enter Item Name: ");
    scanf("%s", i.name);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    printf("\n--- Inventory Details ---\n");
    printf("ID       : %d\n", i.id);
    printf("Name     : %s\n", i.name);
    printf("Quantity : %d\n", i.quantity);

    return 0;
}