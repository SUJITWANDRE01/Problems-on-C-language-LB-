#include<stdio.h>

void Display(int iNo)
{
    if( 0<= iNo && iNo <= 9)
    {
        if(iNo == 0)
        {
            printf("Zero");
        }
        else if(iNo == 1)
        {
            printf("One");
        }
        else if(iNo == 2)
        {
            printf("Two");
        }
        else if(iNo == 3)
        {
            printf("Three");
        }
        else if(iNo == 4)
        {
            printf("Four");
        }
        else if(iNo == 5)
        {
            printf("Five");
        }
        else if(iNo == 6)
        {
            printf("Six");
        }
        else if(iNo == 7)
        {
            printf("Seven");
        }
        else if(iNo == 8)
        {
            printf("Eignt");
        }
        else
        {
            printf("Nine");
        }
        
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}