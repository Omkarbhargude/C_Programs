#include<stdio.h>

int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter total marks :\n");
    scanf("%d",&iTotal);

    printf("Enter the obtained marks :\n");
    scanf("%d",&iObtained);

    fPercentage = ((float)iObtained / (float)iTotal) * 100;

    printf("The percentage is : %f\n",fPercentage);

    return 0;
}