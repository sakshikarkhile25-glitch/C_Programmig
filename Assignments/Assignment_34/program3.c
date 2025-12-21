
#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(char c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for(char c = ch; c >= 'a';c--)
        {
            printf("%c\t",c);
        }
    }
}
int main()
{
    char cValue = '\0';
   
    printf("Enter the Character:");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}
