#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1; iCnt <=(iNo / 2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplicatio of factors is :%d\n",iRet);

    return 0;
}