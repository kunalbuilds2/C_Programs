#include<stdio.h> 
#include <stdio.h>
int main () {
   float a,b,result;
   char sign;
   printf("Enter the first number:");
   scanf("%f",&a);
   printf("Enter the sign(+,-,/,*):");
   scanf(" %c",&sign);
   printf("Enter the second number:");
   scanf(" %f",&b);
   switch (sign) {
    case '+':
    result = a+b;
    break;
    case '-':
    result = a-b;
    break;
    case '*':
    result = a*b;
    break;
    case '/':
    result = a/b;
    break;
    default :
    printf("Invalid operator\n");
    return 0;
   }
printf("Result:%2.f\n",result);
return 0;
}