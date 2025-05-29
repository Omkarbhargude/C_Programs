#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConv = 0;
    iConv = iNo * 70;
    return iConv;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the USD Amount : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("The amount in INR is : %d\n",iRet);

    return 0;
}