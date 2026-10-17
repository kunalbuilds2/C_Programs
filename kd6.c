#include <stdio.h>
int main () {
    int a;
    printf("Guess the number:");
    scanf("%d" , &a);
    if (a==25) {
printf("Your guess is correct\n");
    }
    else if (a>25) {
        printf("Worng!! you have choose much higher number\n");
    }
        else if (a<25) {
            printf("Haaahaaa ! Again wrong number is lowwww :\n");
        }
        else {
            printf("Invalid number\n");
    } 
    return 0;
}