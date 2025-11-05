
#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("converted character is :%c\n", cValue - 32);                 // convert to uppercase
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("converted character is :%c\n", cValue + 32);                 // convert to lowercase
    }
    
}
//////////////////////////////////////////////////////////////////////////
//
//Function Name:DisplayConvert
//Description:  It accepts one character from user and converts its case
//Input:Character
//Output:Prints converted character on screen
//Author: Sakshi Damodar Karkhile
//Date:25/10/2025
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);                          

    DisplayConvert(cValue);
    return 0;
}