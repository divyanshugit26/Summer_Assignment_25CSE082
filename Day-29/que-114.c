#include <stdio.h>

int main() {
    int a[10], n, i, sum = 0, choice, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Display\n2. Sum\n3. Largest\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d", sum);
            break;

        case 3:
            max = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] > max)
                    max = a[i];
            }
            printf("Largest = %d", max);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}