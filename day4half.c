#include <stdio.h>
int num(int a);
int main () {
    int a,c;
    printf("enter a number");
    scanf("%d",&a);
    c=num(a);
    if (c==2)
    printf ("even");
    else
     printf("odd");
    }
    int num (int a)
    {
        int c;
        if(a % 2 == 0) {
         c=2;
    }
    else {
     c=1;
    }
    return c;
    } 