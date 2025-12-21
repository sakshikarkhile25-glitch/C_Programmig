#include<stdio.h>

void Update(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        ch=(char)(ch - 32);
        printf("Capital is:%c",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch=(char)(ch + 32);
        printf("Small is:%c",ch);
    }
}
int main()
{
    char cValue = '\0';
   
    printf("Enter the Character:");
    scanf("%c",&cValue);

    Update(cValue);

    
    return 0;
}
