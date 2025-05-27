#include<stdio.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE -1

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }

    return 0;

}