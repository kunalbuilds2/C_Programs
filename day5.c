#include <stdio.h>

int num(int a);// declare

int main() {

    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = num(a); //function call

    if (b == 2)
        printf("Prime");
    else
        printf("Composite");

    return 0;
}

int num(int a) {

    int i, count = 0;

    for (i = 1; i <= a; i++) { //actual work done

        if (a % i == 0) {
            count++;
        }
    }

    return count;
}