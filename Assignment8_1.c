#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %.4lf",dRet);
    return 0;
}