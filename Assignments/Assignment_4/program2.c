#include <stdio.h>

void FactRev(int iNo)
{
    int i;

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)        
    {
        printf("0 has infinite factors\n");
        return;
    }

    if (iNo == 1)        
    {
        printf("1\n");
        return;
    }
    for (i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}
//////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : Accept number from user and display
//                 its factor in decreasing order.
// Input         : Integer
// Output        : factors in decreasing order
// Author        : Sakshi Damodar Karkhile
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    FactRev(iValue);

    return 0;
}