// program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("\nint    %d\nfloat  %d\nchar   %d\ndouble %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    getch();
}