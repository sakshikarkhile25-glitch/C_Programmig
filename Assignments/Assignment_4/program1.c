#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int product = 1;

    if (iNo == 0)            
        return 0;

    if (iNo < 0)           
        iNo = -iNo;

    for (i = 1; i <= iNo / 2; i++)   
    {
        if (iNo % i == 0)
        {
            product *= i;
        }
    }

    return product;
}
//////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : Accept number from user and display
//                 its multiplication.
// Input         : Integer
// Output        : Multiplication of factors
// Author        : Sakshi Damodar Karkhile
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}