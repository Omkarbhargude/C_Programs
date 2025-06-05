#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bFlag = true;

    if((iNo % 2) == 0)
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is a Even number \n",iValue);
    }
    else
    {
        printf("%d is not a even number\n",iValue);
    }


}