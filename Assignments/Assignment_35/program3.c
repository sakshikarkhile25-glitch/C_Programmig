#include<stdio.h>

int CountSmall(char Brr[])
{
    int iCountSmall = 0,iCountCap = 0;

    while(*Brr != '\0')
    {
        if((*Brr >= 'a' && *Brr <= 'z'))
        {
            iCountSmall++;
        }
        else if((*Brr >= 'A' && *Brr <='Z'))
        {
            iCountCap++;
        }
        Brr++;
    }
    return (iCountSmall-iCountCap);   
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
