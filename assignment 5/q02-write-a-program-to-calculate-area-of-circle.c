// calculate area of circle 
#include<stdio.h>
#include<conio.h>
int main()
{
    double pi = 22.0/7,r;
    printf("\n\n        calculate area of circle\n\nenter radius of the circle : ");
    scanf("%lf",&r);
    printf("area of circle is %lf\n\n",pi*r*r);
    getch();
}