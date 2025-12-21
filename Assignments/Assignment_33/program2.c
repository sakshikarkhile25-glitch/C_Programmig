
#include<stdio.h>
#include<stdbool.h>

bool CheckCap(char ch)
{
    if(ch >= 'A' && ch <= 'Z')  
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

    bRet = CheckCap(cValue);

    if(bRet == true)
    {
        printf("It is an Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }



    return 0;
}
