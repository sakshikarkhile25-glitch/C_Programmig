#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iSize,int iValue)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            return true;
        }
        
    }
    return false;
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    bool bRet=false;
    int iNo=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

    printf("Enter the No:");
    scanf("%d",&iNo);

    Brr=(int*) malloc(iLength * sizeof(int));

    if(NULL == Brr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the Element:");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet=Check(Brr,iLength,iNo);
    if(bRet==true)
    {
        printf("Value is present");
    }
    else
    {
        printf("Value is Absent");
    }

}