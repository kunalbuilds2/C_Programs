//Enter the number & check the largest one among them & print the multiple table of larger no.
#include <stdio.h>
int main() {
    int a,b,c,sum,product, larger , i;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number ");
    scanf("%d",&c);
    sum = a + b + c;
    product = a * b * c;
    printf("The sum is : %d\n",sum);
    printf("The product is : %d\n",product);
    //compare them 
    if (a > b && a > c) {
       larger = a;
    }
    else if (b > c) { 
            larger = b;
    }
    else if ( c > a) {
        larger = c;
    }
    printf("the larger number is : %d\n",larger);
    printf(" the multiplication table is : %d\n",larger);
    for (i=1 ;i<=20 ;i++) {
    printf(" %d * %d = %d\n", larger ,i, larger* i);
    }
    return 0;
}