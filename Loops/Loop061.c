#include<stdio.h>

double SquareMeter(int iArea)
{
    float iSmeter = 0.0929f;
    float iAns = iArea * iSmeter;
    return iAns;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area in square meter is :%f\n",dRet);

    return 0;
}