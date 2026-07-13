#include <stdio.h>

void display(int roll[], char name[][30], int n) {
    int i;
    printf("\nStudent Details\n");
    for(i = 0; i < n; i++)
        printf("%d %s\n", roll[i], name[i]);
}

int main() {
    int roll[3], i;
    char name[3][30];

    for(i = 0; i < 3; i++) {
        printf("Enter Roll No and Name: ");
        scanf("%d%s", &roll[i], name[i]);
    }

    display(roll, name, 3);

    return 0;
}