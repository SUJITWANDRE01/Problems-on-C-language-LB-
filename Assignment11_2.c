#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
        iDigit++;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}