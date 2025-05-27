#include<stdio.h>

int main()
{
    int iTotal = 400;
    int iObtained = 320;
    float fPercentage = 0.0f;

    fPercentage = ((float)iObtained / (float)iTotal) * 100;

    printf("The total percentage is : %.2f%%\n",fPercentage);

    return 0;
}