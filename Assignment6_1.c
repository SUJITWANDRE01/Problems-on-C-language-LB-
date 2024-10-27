#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Medium");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}