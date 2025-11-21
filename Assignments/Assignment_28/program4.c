/*
     Input : iRow = 4  iCol = 5

     Output : 4  4  4  4  4  4
              3  3  3  3  3  3
              2  2  2  2  2  2 
              1  1  1  1  1  1
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
     int iCount = iRow;     
     
    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j <= iCol; j++)
        {
            printf("%d\t",iCount);
        }
        iCount--;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Cloumns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}
