/*
     Input : iRow = 4  iCol = 4

     Output : A  B  C  D
              A  B  C  D
              A  B  C  D
              A  B  C  D
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';

    for(i  =1; i <= iRow; i++)
    {
        ch='A';
        for(j = 1; j <= iCol ;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Cloumns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}
