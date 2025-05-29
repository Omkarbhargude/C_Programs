#include<stdio.h>

int DisplayFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = DisplayFactorial(iValue);

    printf("The factorial are :%d\n",iRet);

    return 0;

}