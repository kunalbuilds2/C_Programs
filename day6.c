#include <stdio.h>
int main () {
    int mark;
    printf("enter the marks:");
    scanf("%d",&mark);
    if (mark >= 30) {
        printf("He has passed the test\n");
    } 
    else {
        printf("He has failed the test\n");
    }
    return 0;
}


write a program to enter the mark of student then check whether he or she is pass or fail.