#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}