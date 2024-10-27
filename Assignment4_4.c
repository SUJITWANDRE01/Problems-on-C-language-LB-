#include<stdio.h>
///////////////////////////////////////////////////////////////////
// 
//  Function Name : SumNonFact
//  Description :   It is used to perform summation of non-factors
//  Input :         int
//  Output :        int
//  Author :        Sujit Wandre
//  Date :          21/10/2024
//
///////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

///////////////////////////////////////////////////////////////////
//
//  This program is used to summation of non-factors of given number
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}