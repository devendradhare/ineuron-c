// program which takes a charecter as an input and print its ASCII code
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n\n        Characters ASCII code\nEnter a character : ");
    scanf("%c",&ch);
    printf("\nASCII code of %c is %d\n\n",ch,ch);
    
    getch();
}