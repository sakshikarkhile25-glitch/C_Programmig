#include<stdio.h>

void DisplayASCII()
{
    for(int iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d  %c  %x  %o\n",iCnt,iCnt,iCnt,iCnt);
      
    }
    
}
int main()
{
    DisplayASCII();

    return 0;
}