// program to claculate volume of a cuboid
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("\n\n        calculate volume of cuboid\n\nenter three sides of cuboid : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nvolume of cuboid is %f\n\n",a*b*c);
    getch();
}