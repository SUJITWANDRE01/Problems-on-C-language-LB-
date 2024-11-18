#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;

        while (Arr[iCnt] != 0)
        {
            iSum += Arr[iCnt] % 10;   // Add the last digit to sum
            Arr[iCnt] /= 10;         // Remove the last digit
        }
        printf("%d\t", iSum);
    }
    printf("\n");

}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}