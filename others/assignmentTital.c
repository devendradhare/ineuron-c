// pest qustion and replece spaces and . with -
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i;
    printf("\nEnter qustion number first : ");
    gets(str);
    for(i = 0;str[i];i++)
    {
        if(str[i]==32||str[i]=='.')
        {
            str[i]='-';
        }
    }
    str[i]='.';
    str[i+1]='c';
    str[i+2]=0;
    printf("\n%s",str);
}