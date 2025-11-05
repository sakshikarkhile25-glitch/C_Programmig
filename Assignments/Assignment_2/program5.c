#include<stdio.h>
#include<stdbool.h>


bool ChkEven(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;

    }
}
///////////////////////////////////////////////
//
//Function Name:ChkEvenOdd
//Description: It is used to perform even or odd
//Input:bool 
//Output:Integer
//Author:Sakshi Damodar Karkhile
//Date:25/10/2025
//
////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    printf("Result is : %d\n",bRet);
    
    return 0;
}




