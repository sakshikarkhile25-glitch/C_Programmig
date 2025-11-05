//Accept number from user and check whether number is even or odd.

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



