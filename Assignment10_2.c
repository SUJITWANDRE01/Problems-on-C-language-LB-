#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    if(iEnd < iStart)
    {
        printf("Invalid Range\n");
    }

    while(iEnd >= iStart)
    {
        if(iStart % 2 == 0)
        {
            printf("%d\t",iStart);
        }
        iStart++;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}