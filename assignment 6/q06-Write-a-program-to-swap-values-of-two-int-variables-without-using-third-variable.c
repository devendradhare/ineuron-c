// Write a program to swap values of two int variables without using third variable
#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10, b = 20;
    printf("\na = %d, b = %d", a, b);

    // method 1
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("\na = %d, b = %d",a,b);

    // method 2
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\na = %d, b = %d", a, b);
}