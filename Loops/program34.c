#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) //O(N)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("Even Factors :%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}