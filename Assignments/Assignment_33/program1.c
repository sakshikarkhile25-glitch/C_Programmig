
#include<stdio.h>
#include<stdbool.h>

bool Checkalpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return true; 
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet = Checkalpha(cValue);

    if(bRet == true)
    {
        printf("It is an Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}
