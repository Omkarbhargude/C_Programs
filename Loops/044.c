#include<stdio.h>

int DiffFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = DiffFact(iValue);

    printf("Diff between factors and non factors are :%d\n",iRet);



    return 0;
}