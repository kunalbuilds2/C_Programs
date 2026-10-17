//area of rectangle 
#include <stdio.h>
int rect (int l, int b );
int main() {
    int l,b,area;
    printf("enter the first number");
    scanf("%d",&l);
    printf("enter the second number");
    scanf("%d",&b);
   area= rect (l,b);
    printf ("Area is %d",area);
}
int rect (int l, int b)
{
    int area;
    area=l*b;
    return area;
}