
#include<stdio.h>

int CountSmall(char Brr[])
{
    int iCount = 0;

    while(*Brr != '\0')
    {
        if((*Brr >= 'a' && *Brr <= 'z'))
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

    iRet=CountSmall(Arr);
    printf("Count of Small is:%d\n",iRet);

    
    return 0;
}
