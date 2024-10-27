#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact *= iCnt;
        }
        else
        {
            iEvenFact *= iCnt;
        }
    }
    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd Factorial of number is : %d",iRet);

    return 0;
}