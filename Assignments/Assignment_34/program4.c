
#include<stdio.h>

void CheckSpecial(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("There is no specialc symbol");
    }
    else
    {
        printf("This is a specialc symbol");
    }
}
int main()
{
    char cValue = '\0';
   
    printf("Enter the Character:");
    scanf("%c",&cValue);

    CheckSpecial(cValue);

    
    return 0;
}
