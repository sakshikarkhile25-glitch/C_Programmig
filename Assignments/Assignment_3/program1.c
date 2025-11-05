
#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iNum);
        iNum = iNum + 2;
    }
}
////////////////////////////////////////////////
//
//Function Name:PrintEven
//Description:  It is used to print first N even numbers
//Input:Integer 
//Output:Prints even numbers on screen
//Author:Sakshi Damodar Karkhile
//Date:25/10/2025
//
////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}