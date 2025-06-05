#include<stdio.h>

int EvenFactorail(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorail(iValue);

    printf("The Even factorial of number are : %d\n",iRet);
 
    return 0;

}