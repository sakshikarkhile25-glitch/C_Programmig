
#include<stdio.h>
#include<stdbool.h>

bool CountSmall(char Brr[])
{
    int iCountSmall = 0,iCountCap = 0;

    while(*Brr != '\0')
    {
        if(((*Brr == 'a') || (*Brr == 'e') || (*Brr == 'i') || (*Brr == 'o') || (*Brr == 'u')))
        {
            return true;
        }
        Brr++;
    }
    return false;   
}
int main()
{
    char Arr[] = {'\0'};
    bool bRet = false;
   
    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    bRet=CountSmall(Arr);
    
    if(bRet==true)
    {
        printf("Vowel is present");
    }
    else
    {
        printf("Vowel is not present");
    }

    return 0;
}
