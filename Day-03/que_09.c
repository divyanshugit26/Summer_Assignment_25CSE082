#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime Number");

    return 0;
}