#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   It prints the positive factors of a given number in reverse order
//  Input :         int
//  Output :        None
//  Author :        Sujit Annapa Wandre
//  Date :          21/10/2024
//
//////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo -1;  iCnt > 0 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d \t",iCnt);
        }
    } 
}

//////////////////////////////////////////////////////////////////////
//
//  This application is used to print factors of a given number in reverse order
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}