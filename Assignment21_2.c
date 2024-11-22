#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Cap = 'A', Small = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,Cap = 'A', Small = 'a'; j <= iCol; j++,Cap++,Small++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",Small);
            }
            else
            {
                printf("%c\t",Cap);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}