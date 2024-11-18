#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1,ch = 'A'; iCnt <= 5; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}