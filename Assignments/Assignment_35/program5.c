#include<stdio.h>

void DisplayReverse(char *Brr)
{
    char *start = Brr;
    char *end = Brr;
    while(*end !='\0')
    {
        end++;
    }
    end--;

    char temp = '\0';

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[] = {'\0'};
    char Brr[] = {'\0'};
    
    printf("Enter the Source:");
    scanf("%[^'\n']s",Arr);

    DisplayReverse(Arr);
    printf("Reverse String is:%s",Arr);

    return 0;
}
