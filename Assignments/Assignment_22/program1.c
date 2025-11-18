#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountEven
// Description   : Accept N number from user and return 
//                 frequency of even number
// Input         : Integer array, Integer (size)
// Output        : Integer
// Author        : Sakshi Damodar karkhile
// Date          : 17/11/2025
///////////////////////////////////////////////////////////////


int CountEven(int Arr[], int Length)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory :\n");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}
// Time Coplexity O(N)