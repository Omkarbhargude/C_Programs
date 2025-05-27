#include<stdio.h>

int KMToMeter(int iKM)
{
    return iKM * 1000; // 1 Km = 1000 meter
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer :\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("%d Kilometer to Meter is : %d\n",iValue,iRet);

    return 0;
}