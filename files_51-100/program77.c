#include<stdio.h>

int DiffFactorail(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1, iFact2 = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else if((iCnt % 2) != 0)
        {
            iFact2 = iFact2 * iCnt;

        }
    }
    return iFact1 - iFact2;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = DiffFactorail(iValue);

    printf("The Odd factorial of number are : %d\n",iRet);
 
    return 0;

}