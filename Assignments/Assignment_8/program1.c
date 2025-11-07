
#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Accept number from user and display message
//                 depending on range.
// Input         : Integer
// Output        : Displays "Small", "Medium", or "Large"
// Author        : Sakshi Damodar Karkhile
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void Number(int iNo)
{

    if( iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large");
    }


}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}
//Time Complexity: O(1)
