#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5 and 3\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5 and 3\n",iValue);
    }

    return 0;
    
}