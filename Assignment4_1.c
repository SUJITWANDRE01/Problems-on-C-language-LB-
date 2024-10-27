#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to perform multiplication of factors
//  Input :         int
//  Output :        int
//  Author :        Sujit Annapa Wandre
//  Date :          21/10/2024
//
//////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    } 
    return iMult;
}

//////////////////////////////////////////////////////////////////////
//
//  This application is used to perform multiplication of factors of given number
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d \n",iRet);

    return 0;
}