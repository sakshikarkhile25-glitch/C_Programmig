#include <stdio.h>

void NonFact(int iNo)
{
    int i;

    if (iNo < 0) 
        iNo = -iNo;

    if (iNo == 0 || iNo == 1) {   
        printf("No non-factors\n");
        return;
    }

    for (i = 1; i <= iNo - 1; i++) 
    {
        if (iNo % i != 0) 
        {     
            printf("%d ", i);
        }
    }
    printf("\n");
}
///////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : Accept number from user and display
//                 all its non-factors.
// Input         : Integer
// Output        : Prints non-factors on screen
// Author        : Sakshi Damodar Karkhile
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}



