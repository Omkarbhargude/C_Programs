#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2;iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        }
    }
    if(iCnt > (iNo/2))
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

    printf("Enter a number \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It is a prime number \n");
    }
    else
    {
      printf("It is not a prime number\n");
    }

    return 0;
}