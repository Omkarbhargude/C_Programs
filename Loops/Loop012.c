#include<stdio.h>
#define  ERR_INVALID_INPUT -1

int Factorial(unsigned int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
    {
        return ERR_INVALID_INPUT;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID_INPUT)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("The Factorial of given number is : %d\n",iRet);
    }

    return 0;
}