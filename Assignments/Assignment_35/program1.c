#include<stdio.h>

int CountCap(char Brr[])
{
    int iCount = 0;

    while(*Brr != '\0')
    {
        if((*Brr >= 'A' && *Brr <= 'Z'))
        {
            iCount++;
        }
        Brr++;
    }
    return iCount;   
}
int main()
{
    char Arr[] = {'\0'};
    int iRet = 0;
   
    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    iRet=CountCap(Arr);
    printf("Count of Cap is:%d\n",iRet);

    
    return 0;
}
