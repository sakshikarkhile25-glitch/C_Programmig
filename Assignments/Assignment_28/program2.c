/*
     Input : iRow = 4  iCol = 5

     Output : A  B  C  D  E
              a  b  c  d  e  
              A  B  C  D  E
              a  b  c  d  e
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Cap = 'A';
    char Small = 'a';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0) 
        {
            Cap = 'A';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",Cap);
                Cap++;
            }
        }
        else
        {
            Small='a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",Small);
                Small++;
            }
        }
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
