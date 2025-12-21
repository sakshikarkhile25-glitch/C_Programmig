
#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')  
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

    bRet=CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is an Small Character");
    }
    else
    {
        printf("It is not a Small Character");
    }

    return 0;
}
