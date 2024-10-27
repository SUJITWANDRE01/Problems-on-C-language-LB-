#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   It Display the first 5 multiple
//  Input :         int
//  Output :        none
//  Author :        Sujit Wandre
//  Date :          23/10/2024
//
/////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}

/////////////////////////////////////////////////////////////////////
//
//  This program is uesd to perform first 5 multiples of number
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}