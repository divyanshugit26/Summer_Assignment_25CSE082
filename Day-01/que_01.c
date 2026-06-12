#include <stdio.h>

int main()
{
    int N, sum = 0;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}