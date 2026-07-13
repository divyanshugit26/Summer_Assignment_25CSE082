#include <stdio.h>

struct Employee {
    int id;
    char name[30];
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("\nEmployee ID   : %d\n", e.id);
    printf("Employee Name : %s\n", e.name);

    return 0;
}