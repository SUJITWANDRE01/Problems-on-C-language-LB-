#include<stdio.h>

int EvenFactoorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            iFact *= iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactoorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return 0;
}