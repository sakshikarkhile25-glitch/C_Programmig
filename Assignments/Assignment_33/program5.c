#include<stdio.h>
#include<stdbool.h>

void Checkalpha(char ch)
{
    if(ch == 'A')  
    {
        printf("Your Exam is at A is at 7 Am"); 
    }
    else if(ch == 'B')  
    {
        printf("Your Exam is at B is at 8.30 Am"); 
    }
    else if(ch == 'C')  
    {
        printf("Your Exam is at A is at 9.20 Am"); 
    }
    else if(ch == 'D')  
    {
        printf("Your Exam is at A is at 10.30 Am"); 
    }
    
}
int main()
{
    char cValue = '\0';
    
    printf("Enter the Character:");
    scanf("%c",&cValue);

    Checkalpha(cValue);

    return 0;
}
