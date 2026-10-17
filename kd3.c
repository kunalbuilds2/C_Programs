#include <stdio.h>
#include <math.h>
int main () {
    float Amount, P,T,R,SI,CI;
    printf("enter a principle:\n");
    scanf("%f",&P);
    printf("enter time:\n");
    scanf(" %f",&T);
    printf("enter rate:\n");
    scanf(" %f",&R);
    SI=(P*T*R)/100;
    Amount= P*pow(1.0+R/100.0,T);
    CI=Amount-P;
    printf("Simple Interest is:%.2f\n",SI);
    printf("Amount : %.2f\n",Amount);
    printf("Compound Interest: %.2f\n",CI);
 return 0;
}