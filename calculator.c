#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,s,sum,difference,division,multiplication,choice,area,perimeter,l,r;
    float si,ci,P,T,R,A,bmi,Weight,Height,Celcius,Fahrenheit,Kelvin,h;
    kunal:
    printf("1.To find sum of two number\n");
    printf("2.To find difference of two number\n");
    printf("3.To find division of two number\n");
    printf("4.To find multipication of two number\n");
    printf("5.To find simple interest\n");
    printf("6.To find compound interest\n");
    printf("7.To find body mass index:\n");
    printf("8.To find temperature\n");
    printf("9.To find area\n");
    printf("10.To find perimeter:\n");
    printf("Choose any one choice (1-10):\n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        sum = a + b;
        printf("The sum is: %d\n", sum);
        break;
        case 2:
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        difference = a - b;
        printf("The difference is: %d\n",difference);
        break;
        case 3:
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        division = a / b;
        printf("The division is:%d\n",division);
        break;
        case 4:
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        multiplication = a * b;
        printf("The multiplication:%d\n",multiplication);
        break;
        case 5:
        printf("Enter the principle:\n");
        scanf("%f",&P);
        printf("Enter the Time:\n");
        scanf(" %f",&T);
        printf("Enter the Rate:\n");
        scanf(" %f",&R);
        si=(P*T*R)/100;
        printf("The simple interest is:%.2f\n",si);
        break;
        case 6:
        printf("Enter the Principle:\n");
        scanf("%f",&P);
        printf("Enter the Time:\n");
        scanf(" %f",&T);
        printf("Enter the Rate:\n");
        scanf(" %f",&R);
        A = P*pow(1.00 + R/100.00,T);
        ci = A - P;
        printf("The compound interest is:%.2f\n",ci);
        break;
        case 7:
        printf("Enter the weight in kilogram:\n");
        scanf("%f",&Weight);
        printf("Enter the height in meter:\n");
        scanf(" %f",&Height);
        bmi = (Weight)/(Height * Height);
        printf("The body mass index is : %.2f\n",bmi);
        if (bmi<18.5) {
        printf("Underweight\n");
        }
        else if (bmi >= 18.0 && bmi < 25.0) {
            printf("Normal weight\n");
        }
        else if (bmi >= 25.0 && bmi < 30.0 ) {
        printf("Over weight\n");
        }
        else {
        printf("Obesity\n");
        }
        break;
    case 8:
        printf("1. To convert Celcius to fahrenheit\n");
        printf("2. To convert Fahrenheit to celcius\n");
        printf("3. To convert Celcius to kelvin\n");
        printf("4. To convert Fahrenheit to kelvin\n");
        printf("Enter the choice from (1-4):\n");
        scanf("%d",&choice);
    switch(choice) {
        case 1:
        printf("Enter the temperature in celcius:");
        scanf("%f",&Celcius);
        Fahrenheit = (Celcius*9/5)+32;
        printf("The temperature in Fahrenheit is : %.2f\n",Fahrenheit);
        break;
        case 2:
        printf("Enter the temperature in Fahrenheit:");
        scanf("%f",&Fahrenheit);
        Celcius = (Fahrenheit-32)*5/9;
        printf("Temperature in celcius is : %.2f\n",Celcius);
        break;
        case 3:
        printf("Enter the temperature in celcius:");
        scanf("%f",&Celcius);
        Kelvin = Celcius + 273.15;
        printf("The temperature in kelvin : %.2f\n",Kelvin);
        break;
        case 4:
        printf("Enter the temperature in fahrenheit:");
        scanf("%f",&Fahrenheit);
        Kelvin =  (Fahrenheit-32)*5/9 + 273.15;
        printf("The temperature in kelvin is : %.2f\n",Kelvin);
        break;
    default:
        printf("Invalid choice!!\n");
        }
    case 9:
        printf("1.To find area of triangle\n");
        printf("2.To find area of square\n");
        printf("3.To find area of rectangle\n");
        printf("Enter the choice between (1-3):\n");
        scanf("%d",&choice);
    switch(choice) {
        case 1:
        printf("Enter the breath:\n");
        scanf("%f",&b);
        printf("Enter the height:\n");
        scanf("%f",&h);
        area = 0.5*b*h;
        printf("The area of triangle is:%d",area);
        break;
        case 2:
        printf("Enter the length:");
        scanf("%d",&l);
        area = l*l;
        printf("The area of square is:%d",area);
        case 3:
        printf("Enter the length:\n");
        scanf("%d",&l);
        printf("Enter the breath:\n");
        scanf("%d",&b);
        area = l * b;
        printf("The area of rectangle is:%d",area);
        break;
    default:
        printf("Invalid choice!!\n");
        }
    case 10:
         printf("1.To find perimeter of triangle:\n");
         printf("2.To find perimeter of square:\n");
         printf("3.To find perimeter of rectangle:\n");
         printf("Enter the choice (1-3):");
         scanf("%d",&choice);
         switch(choice) {
            case 1:
            printf("Enter the length of 3 sides of triangle:\n");
            scanf("%d %d %d",&a,&b,&c);
            perimeter = a+b+c;
            printf("The perimeter of triangle is:%d\n",perimeter);
            break;
            case 2:
            printf("Enter any one side:\n");
            scanf("%d",&s);
            perimeter = 4 *s;
            printf("The perimeter of square is:%d\n",perimeter);
            break;
            case 3:
            printf("Enter the length:\n");
            scanf("%d",&l);
            printf("Enter the breath:\n");
            scanf("%d",&b);
            perimeter = 2 * (l+b);
            printf("The perimeter of rectangle is:%d\n");
            break;
        default:
            printf("Invalid choice!!\n");
         }
         break;
         default:
         printf("Invalid choices!!! Try again!!\n");
    }
    printf("if you want to continue it again press 1: ");
    scanf("%d",&r);
    if(r==1)
    goto kunal;
    return 0;
}