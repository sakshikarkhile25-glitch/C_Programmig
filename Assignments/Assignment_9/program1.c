
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept number from user and display pattern 
//                 of * and # alternately.
// Input         : Integer
// Output        : Displays pattern 
// Author        : Sakshi Damodar Karkhile
// Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }


    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}


// Time Complexity: O(n)
