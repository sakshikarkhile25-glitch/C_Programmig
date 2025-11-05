
#include <stdio.h>

typedef int bool;
#define TRUE  1
#define FALSE 0

bool ChkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
///////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Accept character from user and check whether 
//                 it is vowel or not.
// Input         : Character
// Output        : TRUE / FALSE
// Author        : Sakshi Damodar Karkhile
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}