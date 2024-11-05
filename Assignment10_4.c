#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iSum = 0;

    if(iEnd < 0 || iStart < 0 || iStart > iEnd)
    {
        return -1;
    }
    
    while(iEnd >= iStart)
    {
        if(iStart % 2 == 0)
        {
            iSum = iSum + iStart;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);

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