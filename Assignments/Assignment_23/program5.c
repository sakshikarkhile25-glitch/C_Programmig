#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int Start,int End)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>Start && Arr[iCnt]<End)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;
    int iStart=0,iEnd=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

    printf("Enter the Start:");
    scanf("%d",&iStart);

    printf("Enter the End:");
    scanf("%d",&iEnd);

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

    Range(Brr,iLength,iStart,iEnd);
}
    