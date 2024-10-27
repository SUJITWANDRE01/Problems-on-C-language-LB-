#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Nonfact
// Description :    Its display the non factor of the number
// Input :          int
// Output :         None
// Author :         Sujit Wander
// Date :           21/10/2024
//
////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////////////
//
// This program is used to print non-factors of given number
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}