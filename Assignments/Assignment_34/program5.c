#include<stdio.h>

void DisplayASCII(char ch)
{
    int iCnt = 0;

    for(int iCnt = 0;iCnt <= 255; iCnt++)
    {
        if(ch == iCnt)
        {
            printf("%c  %d  %x  %o\n",iCnt,iCnt,iCnt,iCnt);
        } 
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character:");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}