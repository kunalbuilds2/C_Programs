#include <stdio.h>
int main () {
    int a ,b,i;
    printf("enter fist number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("Multiplication table of %d\n",a);
    for (i=1 ; i<=10 ; i++) {
    printf("%d * %d = %d\n",a, i, a*i);
    }
    printf("Multiplication table of %d\n",b);
    for (i=1 ; i<=10 ;i++) {
        printf("%d * %d = %d\n",b, i, b*i);
    }
     if (a % 2==0) {
        printf("it is even number\n",a);
    }
    else  {
        printf("it is odd number\n",a);
    }
    if (b % 2 ==0){
        printf("it is even number\n",b);
    }
    else{
        printf("it is odd number\n",b);
    }
     char name []= "Kunal";
    name[0] = 'H';
    printf("%s",name);
    return 0;
}