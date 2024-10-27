#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
// Function Name :  FactDiff
// Description :    It is used to find the difference between summation of all its factors and non factors
// Input  :         int
// Output :         int
// Author :         Sujit Wandre
// Date :           21/10/2024
//
///////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNfact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNfact = iNfact + iCnt;
        }
    }
    return (iFact - iNfact) ;
}

///////////////////////////////////////////////////////////////////
//
//  This program is used to printf difference between summation of all its factors and non factors
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}