#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1;iCnt <=(iNo / 2);iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2 )== 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}