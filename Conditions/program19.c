#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;
    if((iNo % 2) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is a even number\n",iValue);
    }
    else
    {
        printf("%d is not a even number\n",iValue);
    }

    return 0;
    
}