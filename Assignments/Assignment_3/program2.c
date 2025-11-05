#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i < iNo ; i++)
    {
        if((iNo % i )==0 &(i % 2)== 0)

        {
            printf("%d\n", i);
        }
    }
}
///////////////////////////////////////////////////////////////////
//
//Function Name:DisplayFactor
//Description:  It is used to print even factors of a given number
//Input:Integer 
//Output:Prints even factors on screen
//Author:Sakshi Damodar Karkhile
//Date:25/10/2025
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}



