#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("The summation of given number is : %d\n",iRet);

    return 0;
}