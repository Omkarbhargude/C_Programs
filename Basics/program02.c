#include<stdio.h>

int main()
{
    int iTotal = 400;
    int iObtained = 320;
    float fPercentage = 0.0f;

    fPercentage = (iObtained / iTotal) * 100;

    printf("The total percentage is : %f\n",fPercentage);

    return 0;
}