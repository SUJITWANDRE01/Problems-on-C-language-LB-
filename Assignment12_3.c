#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
        iDigit++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);
    return 0;
}