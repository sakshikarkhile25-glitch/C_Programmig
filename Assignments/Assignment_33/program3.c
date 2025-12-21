
#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')  
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

    bRet=CheckDigit(cValue);

    if(bRet==true)
    {
        printf("It is an Digit");
    }
    else
    {
        printf("It is not a Digit");
    }



    return 0;
}
