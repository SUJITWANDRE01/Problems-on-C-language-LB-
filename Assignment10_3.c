#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;

    if(iEnd < 0 || iStart < 0 || iStart > iEnd)
    {
        return -1;
    }
    
    while(iEnd >= iStart)
    {
        iSum = iSum + iStart;
        iStart++;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}