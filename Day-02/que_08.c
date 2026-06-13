#include <stdio.h>

int main() {
    int num, originalNum, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(originalNum == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}