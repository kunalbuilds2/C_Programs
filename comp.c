#include <stdio.h>

int main()
{
    int n, end, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter ending value: ");
    scanf("%d", &end);

    for (i = 1; i <= end; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}