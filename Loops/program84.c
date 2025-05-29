#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false; //this return will execute after checking all the numbers
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero in it\n");
    }
    else
    {
        printf("It does not contain zero in it\n");
    }

    return 0;
}