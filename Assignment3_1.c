#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt =1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d \t",iCnt * 2);
    }
}

int main()
{
    int iValue =0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}