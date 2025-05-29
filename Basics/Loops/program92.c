#include<stdio.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0, iSum2 = 0;

    while(iNo != 0 )
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum1 - iSum2;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Diff of even and odd digit is :%d\n",iRet);
    return 0;
}