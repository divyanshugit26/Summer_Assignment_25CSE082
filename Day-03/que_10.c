#include <stdio.h>

int main() {
    int start, end, i, j, prime;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) {
        prime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(i > 1 && prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}